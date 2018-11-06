#include "point.h"

Point::Point()
{
}

Point::Point(QVector <double> x, QVector <double> y)
{
    this->x = x;
    this->y = y;
}

QVector <double> Point::getX()
{
    return x;
}

double Point::getX(long index) const
{
        return (index >= 0 && index < x.size()) ? x[index]: x[0];
}

void Point::setX(long index, double value)
{
    if (index >= 0 && index < x.size())
        x[index] = value;
}

QVector <double> Point::getY()
{
    return y;
}

double Point::getY(long index) const
{
    return (index >= 0 && index < y.size()) ? y[index]: y[0];
}

void Point::setY(long index, double value)
{
    if (index >= 0 && index < y.size())
        y[index] = value;
}

QString Point::toString()
{
    QString S = "(";
    int i = 0;
    while (i != x.size()) {
        S += QString::number(x[i]) + "; ";
        ++i;
    }
    i = 0;
    while (i != y.size()) {
        if(i == y.size() - 1)
            S += QString::number(y[i]) + ")";
        else
            S += QString::number(y[i]) + "; ";
        ++i;
    }
    return S;
}

