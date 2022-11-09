#ifndef READFILE_H
#define READFILE_H

#include "teamDefinition.h"
#include <vector>
#include <string>
#include <QTextStream>

using namespace std;

void readFromFileIntoVector(vector<Team> &vector,const QString &fileName);


#endif // READFILE_H
