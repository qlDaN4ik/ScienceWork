#include "points.h"

Points::Points()
{
}

void Points::add(Point p)
{
    this->p.push_back(p);
}

void Points::add(QVector <double> x, QVector <double> y)
{
    Point p(x, y);
    this->p.push_back(p);
}

int Points::sizePoints()
{
    return p.size();
}

Point & Points::getPoint(int index)
{
    Point &tmp = (index >= 0 && index < p.size()) ? p[index] : p[0];
    return tmp;
}

Point & Points::operator [] (int index)
{
    return getPoint(index);
}

QVector <double> Points::getVectorFirstX() const
{
    QVector <double> X;
    for(int i = 0; i < p.size(); ++i)
        X.push_back(p[i].getX(0));
    return X;
}

QVector <double> Points::getVectorFirstY() const
{
    QVector<double> Y;
    for(int i = 0; i < p.size(); ++i)
        Y.push_back(p[i].getY(0));
    return Y;
}

QString Points::toString()
{
    QString S="";
    for(int i = 0; i < p.size(); ++i)
        S += getPoint(i).toString() + "\n";
    return S;
}


