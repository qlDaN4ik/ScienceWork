#ifndef POINTS_H
#define POINTS_H
#include "point.h"

class Points
{
public:
    Points();
    void add(Point p);
    void add(QVector <double> x, QVector <double> y);
    int sizePoints();
    Point & getPoint(int index);
    Point & operator [](int index);
    QVector <double> getVectorFirstX() const;
    QVector <double> getVectorFirstY() const;
    QString toString();

private:
    QVector <Point> p;
};

#endif // POINTS_H
