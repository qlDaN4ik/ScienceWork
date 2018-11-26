#include "content.h"

void fillSelectRand(Points &select, int selectCount, int componentNumber, int leftSelect, int rightSelect, bool noise)
{
    for(int i = 0; i < selectCount; ++i) {
        QVector <double> x;
        QVector <double> y;
        double sumX = 0;
        for (int j = 0; j < componentNumber - 1; j++)
        {
            double randomX = (double(rand() % 1000) / 1000.) * (rightSelect - leftSelect) + leftSelect;
            sumX += randomX;
            x.push_back(randomX);
        }
        if (noise)
            y.push_back(sin(sumX) + double(rand() % 3 - 1) / 10);
        else
            y.push_back(sin(sumX));
        select.add(x, y);
    }
}

void fillGraph(NonParametric regression, Points &graph, double cutValue)
{
    double minX = regression.getSelect()[0].getX(0);
    double maxX = regression.getSelect()[0].getX(0);
    for (int i = 1; i < regression.getSelect().sizePoints(); ++i) {
        if (regression.getSelect()[i].getX(0) < minX)
            minX = regression.getSelect()[i].getX(0);
        if (regression.getSelect()[i].getX(0) > maxX)
            maxX = regression.getSelect()[i].getX(0);
    }

    for (int i = 0; i < 1000; ++i) {
        QVector <double> x;
        QVector <double> y;
        x.push_back(minX + i * ((maxX - minX) / 1000));
        x.push_back(cutValue);
        y.push_back(regression.getYwithExam(x));
        graph.add(x, y);
    }
}

QString readFile(QString filename)
{
    filename = QDir::toNativeSeparators(filename);
    QFile file(filename);
    QString line;
    if(!file.exists()){
        qDebug() << "Не существует " << filename;
        return line;
    } else {
        qDebug() << filename << " загружается...";
    }
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
        line=file.readAll();
    file.close();
    for (int i = 0; i < line.length(); ++i)
        if(line[i]=='"')
            line.remove(i,1);
    return line;
}
