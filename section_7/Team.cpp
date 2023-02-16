#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

void Team::SetName(string name){
   this->name = name;
   }
void Team::SetWins(int wins){
   this->wins = wins;
   }
void Team::SetLosses(int losses){
   this->losses = losses;
   }

string Team::GetName(){
   return name;
}
int Team::GetWins(){
   return wins;
}
int Team::GetLosses(){
   return losses;
}
// TODO: Implement GetWinPercentage()
double Team::GetWinPercentage(){
   return wins*1.0/(losses+wins);
}
// TODO: Implement PrintStanding()
void Team::PrintStanding(){
   cout<< fixed << setprecision(2) <<"Win percentage: "<<Team::GetWinPercentage()<<endl;
   string o = Team::GetWinPercentage()>=0.5? "Congratulations, Team "+Team::GetName()+" has a winning average!" :"Team "+Team::GetName()+" has a losing average.";
   cout<< o << endl;
}