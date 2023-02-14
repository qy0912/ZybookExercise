
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#include <sstream>
#include <map>


map<string,string> input_parser(string s){
   vector<string> v = {};
   map<string,string> ret;

   string word;
   stringstream X(s);
   getline(X, word, ' ');
   ret["seed"] =  word;
   getline(X, word, ' ');
   ret["p1"] = word;
   getline(X, word, ' ');
   ret["p2"] = word;
   
   // cout << ret["seed"] << endl;
   // cout << ret["p1"] << endl;
   // cout << ret["p2"] << endl;
   
   while(getline(X, word, ' ')){
      if(stoi(word)>0){
         ret["n_games"]= word;
         break;
      }else{
         cout << "Rounds must be > 0" << endl;
         }
      }
      
   
   cout << ret["p1"] <<" vs " << ret["p2"] << " for " << ret["n_games"] << " rounds" <<endl; 
      
   return ret;
   };

int main() {
   const int ROCK = 0;
   const int PAPER = 1;
   const int SCISSORS = 2;

   int seed;
   cin >> seed;
   srand(seed);

   string s;
   getline(cin,s);

   map<string,string> m = input_parser(s);
   vector<string> v = {"rock","paper","scissors"};
   int p1;
   int p2;
   int p1_win = 0;
   int p2_win = 0;
   for(int i = 0 ; i < stoi(m["n_games"]) ; i++){
      p1 = rand()%3;
      p2 = rand()%3;
      if(p1==p2){
         i-=1;
         cout << "Tie" << endl;
      }else if(p1==0){
         if(p2==1){
            cout << m["p2"] << " wins with " << v.at(p2) << endl;
            p2_win ++;
         }else if(p2==2){
            cout << m["p1"] << " wins with " << v.at(p1) << endl;
            p1_win ++;
         }
      }else if(p1==1){
         if(p2==0){
            cout << m["p1"] << " wins with " << v.at(p1)<< endl;
            p1_win ++;
         }else if(p2==2){
            cout << m["p2"] << " wins with " << v.at(p2) << endl;
            p2_win ++;
         }       
         
      }else if(p1==2){
         if(p2==0){
            cout << m["p2"] << " wins with " << v.at(p2) << endl;
            // cout<< m["p1"] << " is " << v.at(p1) <<endl;
            // cout << m["p2"] << " is " << v.at(p2) <<endl;
            p2_win ++;
         }else if(p2 ==1){
            cout << m["p1"] << " wins with " << v.at(p1) << endl;
            p1_win ++;
         }
      }
   }
   cout << m["p1"] << " wins " << p1_win << " and " << m["p2"] << " wins " << p2_win << endl;
   /* Type your code here. */

   return 0;

}
