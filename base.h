#ifndef BASE_H
#define BASE_H

#include "content.h"

class Base : public QObject
{
    Q_OBJECT
public:
    Base(QString name);

public slots:
    void doGeneticWork();
    void doManuallyWork();
    void fillSelect(Points &select);
    void outRadio(bool current, bool random, bool file);
    void outFilename(QString filename);
    void outPrevSelect(Points prevSelect);
    void outGeneticData(int countGeneration, int individNumber, int geneNumber, int mut, int tournSize,
                 int leftSearch, int rightSearch);
    void outSelectData(int componentNumber, int selectCount, int leftSelect, int rightSelect, bool noise, double cutValue);
    void outBandwidth(double bandwidth);

signals:
    void inResult(double bandwidth, double error);
    void inDisplayTable(Points select);
    void inDisplayGraph(Points selectForGraph, Points select, Points graph, double cutValue);
    void inProgress(int percent);

private:
    Points prevSelect;
    QString name;
    QString filename;
    bool current;
    bool file;
    bool random;
    int componentNumber;
    int selectCount;
    int countGeneration;
    int individNumber;
    int geneNumber;
    double mutation;
    int tournSize;
    int leftSearch;
    int rightSearch;
    double bandwidth;
    int leftSelect;
    int rightSelect;
    bool noise;
    double cutValue;
};

#endif // BASE_H
