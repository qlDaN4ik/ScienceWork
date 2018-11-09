#ifndef CONTENT_H
#define CONTENT_H
#include "geneticfornonparametric.h"
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QDebug>

void fillSelectRand(Points &, int, int);
void fillGraph(NonParametric, Points &);
QString readFile(QString);
#endif // CONTENT_H
