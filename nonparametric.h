#ifndef NONPARAMETRIC_H
#define NONPARAMETRIC_H
#include "points.h"
#include "myfunction.h"

class NonParametric
{
public:
    NonParametric();
    NonParametric(Points select);
    void setSelect(Points select);
    Points getSelect();
    void setBandwidth(double bandwidth);
    double getY(QVector <double> x);
    double getYwithExam(QVector <double> x);
    double error();

private:
    Points select;
    double bandwidth;
};

#endif // NONPARAMETRIC_H
