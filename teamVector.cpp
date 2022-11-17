#include "readFile.h"
#include <vector>
#include <QStandardPaths>

void teamVector()
{
   vector<Team> teamVector;
   QString path = ":/teams/teamFile";
   readFromFileIntoVector(teamVector,path);
}
