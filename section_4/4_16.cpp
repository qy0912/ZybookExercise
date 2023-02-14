#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   char c;
   string s;
   int count = 0;
   
   cin >> c;
   getline(cin,s);

   for(int i = 0 ; i < s.size() ; i++ ){
      if(s.at(i)==c){
         count++;
      }
   }
   
   string p = count==1?"":"'s";
   
   cout<<count<<" "<<c<<p<<endl;

   return 0;
}