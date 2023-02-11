#include <iostream>
#include <string>
using namespace std;

void output(string s1,string s2,int len){
   for(int i = 0 ; i <5 ;i++){
      cout << s1;
   }
   for(int i = 0 ; i<len ; i++){
      cout << s2;
   }
   cout<<endl;
}

int main() {
   string baseDigit;
   string headDigit;
   
   cin>> baseDigit;
   cin>> headDigit;
   /* Type your code here. */
   
   output(" ",headDigit,1);
   output(" ",headDigit,2);
   output(baseDigit,headDigit,3);
   output(baseDigit,headDigit,4);
   output(baseDigit,headDigit,3);
   output(" ",headDigit,2);
   output(" ",headDigit,1);
   
   
   return 0;
}
