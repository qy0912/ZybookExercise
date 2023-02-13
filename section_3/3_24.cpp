#include <iostream>
using namespace std;

int main() {

   
   /* A penny is worth 1 cent.
   A nickel is worth 5 cents.
   A dime is worth 10 cents.
   A quarter is worth 25 cents. */
   int dollar = 100;
   int quarter = 25;
   int dime = 10;
   int nickel = 5;
   int penny = 1;
   
   int n_dollar = 0;
   int n_quarter = 0;
   int n_dime = 0;
   int n_nickel = 0;
   int n_penny = 0;
   
   int total;
   cin >> total;
   n_dollar = total / dollar;
   total -= n_dollar*dollar;
   
   n_quarter = total / quarter;
   total -= n_quarter*quarter;
   
   n_dime = total / dime;
   total -= n_dime*dime;
   
   n_nickel = total / nickel;
   total -= n_nickel*nickel;
   
   n_penny = total / penny;
   total -= n_penny*penny;


   bool exist = false;
   if(n_dollar != 0){
      exist = true;
      string noun = n_dollar==1? "Dollar" : "Dollars";
      cout << n_dollar << " " << noun << endl;
   }
   
   if(n_quarter!= 0){
      exist = true;
      string noun = n_quarter==1? "Quarter" : "Quarters";
      cout << n_quarter << " " << noun << endl;
   }

   if(n_dime != 0){
      exist = true;
      string noun = n_dime==1? "Dime" : "Dimes";
      cout << n_dime << " " << noun << endl;
   }
   
   if(n_nickel != 0){
      exist = true;
      string noun = n_nickel==1? "Nickel" : "Nickels";
      cout << n_nickel << " " << noun << endl;
   }
   
   if(n_penny != 0){
      exist = true;
      string noun = n_penny==1? "Penny" : "Pennies";
      cout << n_penny << " " << noun << endl;
   }
   
   if(!exist){
      cout << "No change" << endl;   
   }
   
   
   return 0;
}