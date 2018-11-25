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

void Base::outData (int componentNumber, int selectCount, int countGeneration, int individNumber,
                    int geneNumber, int mut, int tournSize, int leftSearch, int rightSearch)
{
    this->componentNumber = componentNumber;
    this->selectCount = selectCount;
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

void Base::doWork()
{
    srand( time(nullptr));
    qRegisterMetaType<Points>("Points");

    //Выборка
    Points select;
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
        fillSelectRand(select, selectCount, componentNumber);
    }
    prevSelect = select;
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
        emit inProgress((100 / countGeneration) * (k + 1));
    }
    regression.setBandwidth(genetic.getBest()[1]);
    //График
    Points graph;
    fillGraph(regression, graph);
    Points selectForGraph;
    for (int i = 0; i < select.sizePoints(); ++i){
        QVector <double> tempX;
        tempX.push_back(select[i].getX(0));
        tempX.push_back(0.3);
        if(fabs(select[i].getY(0) - regression.getY(tempX)) <= 0.1)
            selectForGraph.add(select[i]);
    }
    emit inDisplayGraph(selectForGraph, select, graph);

    emit inProgress(100);
    emit inResult(genetic.getBest()[1], -genetic.getBest()[0]);
}
