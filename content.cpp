#include "content.h"

void fillSelectRand(Points &select, int number, int componentNumber)
{
    for(int i = 0; i < number; ++i) {
        QVector <double> x;
        QVector <double> y;
        double a = -5;
        double b = 5;
        double randomx = (double(rand() % 1000) / 1000.) * (b - a) + a;
        x.push_back(randomx);
        randomx = (double(rand() % 1000) / 1000.) * (b - a) + a;
        x.push_back(randomx);
        y.push_back(sin(x[0] + x[1]) + double(rand() % 3 - 1) / 10);
        select.add(x, y);
    }
}

void fillGraph(NonParametric regression, Points &graph)
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
        QVector<double> x;
        QVector<double> y;
        x.push_back(minX + i * ((maxX - minX) / 1000));
        x.push_back(0);
        y.push_back(regression.getYwithExam(x));
        graph.add(x, y);
    }    
}
