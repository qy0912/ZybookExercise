#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <sstream>
using namespace std;

int main() {
   int len;
   cin >> len;
   /* Type your code here. */
   string s;
   getline(cin,s);
   vector<string> v = {};
   map<string,int> m;

   string word;
   stringstream X(s);
   
   for(int i = 0 ; i < len ; i++){
      getline(X, word, ' ');
      if (word == ""){
         i--;
         continue;
         }
      v.push_back(word);
      if(m.find(word) == m.end()){
         m[word] = 1;
      }else{
         m[word] +=1 ;
      }
   }
   
   for(int i = 0 ; i < v.size() ; i ++){
      cout<<v.at(i)<<" - "<<m[v.at(i)] <<endl;
      }

   return 0;
}
