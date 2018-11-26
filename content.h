#ifndef CONTENT_H
#define CONTENT_H
#include "geneticfornonparametric.h"
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QDebug>

void fillSelectRand(Points &select, int selectCount, int componentNumber, int leftSelect, int rightSelect, bool noise);
void fillGraph(NonParametric regression, Points &graph, double cutValue);
QString readFile(QString filename);
#endif // CONTENT_H
