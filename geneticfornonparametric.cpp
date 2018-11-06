#include "geneticfornonparametric.h"

GeneticForNonParametric::GeneticForNonParametric(int individNumber, int geneNumber)
{
    this->individNumber = individNumber;
    this->geneNumber = geneNumber;
    for (int i = 0; i < individNumber; ++i)
    {
        QVector <int> tmp;
        for (int j = 0; j < geneNumber; ++j)
            tmp.push_back(rand() % 2);
        generation.push_back(tmp);
    }
}

GeneticForNonParametric::~GeneticForNonParametric()
{
}

void GeneticForNonParametric::setRange(int left, int right)
{
    this->left = left;
    this->right = right;
}

void GeneticForNonParametric::setRegression(NonParametric regression)
{
    this->regression = regression;
}

void GeneticForNonParametric::fillRating()
{
    int rate;
    double bandwidth;
    double h = (right - left) / pow(2, geneNumber);
    for (int i = 0; i < individNumber; ++i){
        rate = 0;
        for (int j = 0; j < individNumber; ++j)
            rate = rate * 2 + generation[i][j];

        bandwidth = left + rate * h;
        regression.setBandwidth(bandwidth);
        QVector <double> tmp;
        tmp.push_back(-1 * regression.error());
        tmp.push_back(bandwidth);
        rating.push_back(tmp);
    }
}
