#include "base.h"

Base::Base(QString s) : name(s)
{

}

void Base::outRadio(bool current, bool random, bool file)
{
    this->current = current;
    this->random = random;
    this->file = file;
}

void Base::outFilename(QString filename)
{
    this->filename = filename;
}

void Base::outPrevSelect(Points prevSelect)
{
    this->prevSelect = prevSelect;
}

void Base::outGeneticData (int countGeneration, int individNumber, int geneNumber, int mut,
                           int tournSize, int leftSearch, int rightSearch)
{
    this->countGeneration = countGeneration;
    this->individNumber = individNumber;
    this->geneNumber = geneNumber;
    this->tournSize = tournSize;
    this->leftSearch = leftSearch;
    this->rightSearch = rightSearch;
    switch (mut)
    {
    case 0:
        mutation = 1. / (3. * geneNumber);
        break;
    case 1:
        mutation = 1. / geneNumber;
        break;
    case 2:
        mutation = (1. < 3. / geneNumber)?1.:3. / geneNumber;
        break;
    default:
        mutation = 0.1;
    }
}

void Base::outSelectData(int componentNumber, int selectCount, int leftSelect, int rightSelect, bool noise, double cutValue)
{
    this->componentNumber = componentNumber;
    this->selectCount = selectCount;
    this->leftSelect = leftSelect;
    this->rightSelect = rightSelect;
    this->noise = noise;
    this->cutValue = cutValue;
}

void Base::outBandwidth(double bandwidth)
{
    this->bandwidth = bandwidth;
}

void Base::fillSelect(Points &select)
{
    if(file)
    {
        if (filename == "")
            return ;
        QString fileText=readFile(filename);
        QTextStream fileStream(&fileText);
        QString str = fileStream.readLine();
        QStringList lst = str.split(";");
        int sizeX = 0;
        for (int i = 0; i < lst.size(); ++i)
            if (lst.at(i).indexOf("X") >= 0)
                ++sizeX;
        while (!fileStream.atEnd()) {
            str = fileStream.readLine();
            lst = str.split(";");
            QVector <double> x;
            QVector <double> y;
            for (int i = 1; i <= sizeX; ++i)
                x.push_back(lst.at(i).toDouble());
            for (int i = sizeX + 1; i < lst.size(); ++i)
                y.push_back(lst.at(i).toDouble());
            select.add(x, y);

        }
    }
    else if (current) {
        select = prevSelect;
    }
    else if (random) {
        fillSelectRand(select, selectCount, componentNumber, leftSelect, rightSelect, noise);
    }
    prevSelect = select;
}

void Base::doGeneticWork()
{
    srand( time(nullptr));
    qRegisterMetaType<Points>("Points");

    //Выборка
    Points select;
    fillSelect(select);
    emit inDisplayTable(select);

    //Генетика + непараметрика
    NonParametric regression(select);
    GeneticForNonParametric genetic(individNumber, geneNumber);
    genetic.setRegression(regression);
    genetic.setRange(leftSearch, rightSearch);
    genetic.fillRating();
    genetic.bestRatingToZero();
    genetic.best();
    for (int k = 0; k < countGeneration; ++k) {
        genetic.cross(tournSize);
        genetic.mutation(mutation);
        genetic.fillRating();
        genetic.best();
        emit inProgress((97 / countGeneration) * (k + 1));
    }
    regression.setBandwidth(genetic.getBest()[1]);
    //График
    Points graph;
    fillGraph(regression, graph, cutValue);
    Points selectForGraph;
    for (int i = 0; i < select.sizePoints(); ++i){
        if(fabs(select[i].getX(1) - cutValue) <= 0.1)
            selectForGraph.add(select[i]);
    }
    emit inDisplayGraph(selectForGraph, select, graph, cutValue);

    emit inProgress(100);
    emit inResult(genetic.getBest()[1], -genetic.getBest()[0]);
}

void Base::doManuallyWork()
{
    srand( time(nullptr));
    qRegisterMetaType<Points>("Points");

    //Выборка
    Points select;
    fillSelect(select);
    emit inDisplayTable(select);

    //Непараметрика
    NonParametric regression(select);
    regression.setBandwidth(bandwidth);

    //График
    Points graph;
    fillGraph(regression, graph, cutValue);
    Points selectForGraph;
    for (int i = 0; i < select.sizePoints(); ++i){
        if(fabs(select[i].getX(1) - cutValue) <= 0.1)
            selectForGraph.add(select[i]);
    }
    emit inDisplayGraph(selectForGraph, select, graph, cutValue);

    emit inResult(bandwidth, regression.error());
}
