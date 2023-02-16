#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;

string lower (string s){
   string ret = "";
   for(int i = 0; i <s.length();i++){
      ret += tolower(s[i]);
   }
   return ret;
}

// /* Define your function here */
int GetWordFrequency(vector<string> wordsList, string currWord){
   int ret = 0;
   for(int i = 0 ; i< wordsList.size(); i++){
      if(lower(wordsList[i]) == lower(currWord)){
         ret ++;
      }
   }
   return ret;
   }

int main() {
   /* Type your code here */
   vector<string> v;
   int length;
   cin>>length;
   for(int i = 0 ; i< length; i++){
      string s;
      cin>>s;
      v.push_back(s);
   }
   for(int i = 0; i<v.size(); i ++){
      cout << v.at(i) << " " << GetWordFrequency(v,v.at(i))<<endl;
   }

   return 0;
}
