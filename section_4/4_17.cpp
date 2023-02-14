#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   
   string s;
   getline(cin,s);
   string out = "";
   for(int i = 0 ; i < s.size();i++){
      if(isalpha(s.at(i))){
         out.push_back(s.at(i));
      }
   }
   cout << out <<endl;
   
   
   return 0;
}