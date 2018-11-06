#include "genetic.h"

Genetic::~Genetic()
{
}

void Genetic::bestRatingToZero()
{
    bestRating = rating[0];
}

QVector <double> Genetic::getBest()
{
    return bestRating;
}

int Genetic::tourn(int tournSize)
{
    int winner = rand() % individNumber;
    for (int i = 0; i < tournSize - 1; ++i)
    {
        int randsel = rand() % individNumber;
        if (rating[winner][0] < rating[randsel][0])
            winner = randsel;
    }
    return winner;
}

void Genetic::cross(int tournSize)
{
    QVector <QVector <int> > newGeneration;
    int parrent = 0;
    int parrent2 = 0;
    int part = 0;
    for (int i = 0; i < individNumber; ++i){
        parrent = tourn(tournSize);
        parrent2 = tourn(tournSize);
        QVector <int> tmp;
        part = rand() % geneNumber;
        for (int j = 0; j < part; ++j)
            tmp.push_back(generation[parrent][j]);

        for (int j = part; j < geneNumber; ++j)
            tmp.push_back(generation[parrent2][j]);
        newGeneration.push_back(tmp);
    }
    generation = newGeneration;
}

void Genetic::mutation(double mut)
{
    double resmut = 0;
    for (int i = 0; i < individNumber; ++i){
        for (int j = 0; j < geneNumber; ++j){
            resmut = double(rand() % 1000 / 1000.);
            if (resmut >= 0 && resmut < mut)
            {
                if (generation[i][j] == 0)
                    generation[i][j] = 1;
                else
                    generation[i][j] = 0;
            }
        }
    }
}

void Genetic::best()
{
    for (int i = 0; i < individNumber; ++i)
    {
        if (bestRating[0] <= rating[i][0])
        {
            bestRating = rating[i];
            bestIndivid = generation[i];
        }
    }
}
