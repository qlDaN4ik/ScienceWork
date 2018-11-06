#ifndef GENETIC_H
#define GENETIC_H
#include "nonparametric.h"

class Genetic
{
public:
    virtual ~Genetic() = 0;
    void bestRatingToZero();
    QVector <double> getBest();
    int tourn(int tournSize);
    void cross(int tournSize);
    void mutation(double mut);
    void  best();

protected:
    QVector <QVector <int> > generation;
    int individNumber;
    int geneNumber;
    QVector <QVector <double> > rating;
    virtual void fillRating() = 0;
    QVector <double> bestRating;
    QVector <int> bestIndivid;
};

#endif // GENETIC_H
