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
    void outRadio(bool current, bool random, bool file);
    void outFilename(QString filename);
    void outPrevSelect(Points prevSelect);
    void outGeneticData(int countGeneration, int individNumber, int geneNumber, int mut, int tournSize,
                 int leftSearch, int rightSearch);
    void outSelectData(int componentNumber, int selectCount);
    void outBandwidth(double bandwidth);

signals:
    void inResult(double bandwidth, double error);
    void inDisplayTable(Points);
    void inDisplayGraph(Points, Points, Points);
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
};

#endif // BASE_H
