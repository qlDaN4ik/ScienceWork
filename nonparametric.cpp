#include "nonparametric.h"

NonParametric::NonParametric()
{
}

NonParametric::NonParametric(Points select)
{
    this->select = select;
}

void NonParametric::setSelect(Points select)
{
    this->select = select;
}

Points NonParametric::getSelect()
{
    return select;
}

void NonParametric::setBandwidth(double bandwidth)
{
    this->bandwidth = bandwidth;
}

double NonParametric::getY(QVector <double> x)
{
    double y = 0;
    double s1 = 0;
    double s2 = 0;
    for (int i = 0; i < select.sizePoints(); ++i) {
        double contemporary = 1;
        for (int k = 0; k < x.size(); ++k)
            contemporary *= bellShaped((x[k] - select[i].getX(k)) / bandwidth);
        s1 += select[i].getY(0) * contemporary;
        s2 += contemporary;
    }

    if (equal(s2, 0))
        y = 0;
    else
        y = s1 / s2;
    return y;
}

double NonParametric::getYwithExam(QVector <double> x)
{
    double y = 0;
    double s1 = 0;
    double s2 = 0;
    for (int i = 0; i < select.sizePoints(); ++i) {
        int flag = 0;
        for (int k = 0; k < x.size(); ++k)
            if (equal(x[k], select[i].getX(k)))
                ++flag;
        if (flag == x.size())
            continue;

        double contemporary = 1;
        for (int k = 0; k < x.size(); ++k)
            contemporary *= bellShaped((x[k] - select[i].getX(k)) / bandwidth);
        s1 += select[i].getY(0) * contemporary;
        s2 += contemporary;
    }

    if (equal(s2, 0))
        y = 0;
    else
        y = s1 / s2;
    return y;
}

double NonParametric::error()
{
    double de;
    double e = 0;
    for (int i = 0; i < select.sizePoints(); ++i) {
        de = select[i].getY(0) - getY(select[i].getX());
        e += (de * de);
    }
    e = e / static_cast<double>(select.sizePoints());
    e = sqrt(e) / static_cast<double>(select[0].getX().size());
    return e;
}
