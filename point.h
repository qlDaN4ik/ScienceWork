#ifndef POINT_H
#define POINT_H
#include <QObject>
#include <QVector>

class Point
{
public:
    Point();
    Point(QVector <double> x, QVector <double> y);
    QVector <double> getX();
    double getX(long index) const;
    void setX(long index, double value);
    QVector <double> getY();
    double getY(long index) const;
    void setY(long index, double value);
    QString toString();

private:
    QVector <double> x;
    QVector <double> y;
};

#endif // POINT_H
