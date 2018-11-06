#ifndef GENETICFORNONPARAMETRIC_H
#define GENETICFORNONPARAMETRIC_H
#include "genetic.h"

class GeneticForNonParametric : public Genetic
{
public:
    GeneticForNonParametric(int individNumber, int geneNumber);
    ~GeneticForNonParametric() override;
    void setRange(int left, int right);
    void setRegression(NonParametric regression);
    void fillRating() override;

private:
    int left;
    int right;
    NonParametric regression;
};

#endif // GENETICFORNONPARAMETRIC_H
