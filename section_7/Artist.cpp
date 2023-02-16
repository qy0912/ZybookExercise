#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// TODO: Define default constructor
Artist::Artist(){
   artistName="unknown";
   birthYear = -1;
   deathYear = -1;
}
// TODO: Define second constructor to initialize
//       private fields (artistName, birthYear, deathYear)
Artist::Artist(string s, int a, int b){
   artistName=s;
   birthYear = a;
   deathYear = b;
}

string Artist::GetName(){
   return artistName;
}
int Artist::GetBirthYear(){
   return birthYear;
}
int Artist::GetDeathYear(){
   return deathYear;
}
// TODO: Define PrintInfo() function
//      If deathYear is entered as -1, only print birthYear

void Artist::PrintInfo(){
   cout << "Artist: " << artistName<<" ";
   if(birthYear>0 && deathYear>0){
      cout<<"("<<birthYear<<" to "<<deathYear<<")"<<endl;
   }else if(birthYear>0){
      cout<<"("<<birthYear<<" to "<<"present"<<")"<<endl;
   }else{
      cout<<"(unknown)"<<endl;   
   }
}