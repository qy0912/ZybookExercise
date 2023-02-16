#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
   // TODO: Declare private data members - name, wins, losses
   public:
      string name;
      int wins;
      int losses;
      void SetName(string name);
      void SetWins(int wins);
      void SetLosses(int losses);
      string GetName();
      int GetWins();
      int GetLosses();
      double GetWinPercentage();
      void PrintStanding();
};

#endif