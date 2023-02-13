#include <iostream>
using namespace std;

int main() {
   int inputYear;
   bool isLeapYear = false;
   
   cin >> inputYear;
   
   /* Type your code here. */
   if(inputYear%100 == 0){
      if (inputYear%400 == 0){
         isLeapYear = true;
      }
   }else{
      if (inputYear%4==0){
         isLeapYear = true;
      }
   }

   string s = isLeapYear? " - leap year" : " - not a leap year";
   cout<<inputYear<<s<<endl;
   return 0;
}