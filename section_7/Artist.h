#ifndef ARTISTH
#define ARTISTH

#include <string>
using namespace std;

class Artist{
   public:
      Artist();

      Artist(string artistName, int birthYear, int deathYear);

      string GetName();

      int GetBirthYear();

      int GetDeathYear();

      void PrintInfo();
   
   private:
      string artistName;
      int birthYear;
      int deathYear;

};

#endif