#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;
   
   if(highwayNumber<1 || highwayNumber>999 ){
      cout << highwayNumber <<" is not a valid interstate highway number." << endl;
      return 0;   
   }
   
   bool isPrimary;
   bool isValid = false;
   
   if(highwayNumber>0 && highwayNumber<100){
      isPrimary = true;
   }else{
      isPrimary = false;
      if(highwayNumber%100 != 0){
         isValid = true;
      }else{
         cout << highwayNumber <<" is not a valid interstate highway number." << endl;
         return 0;
      }
   }

   string p = isPrimary? "primary" : "auxiliary";
   string dir = highwayNumber%2==0 ? "east/west": "north/south";
   if(isPrimary){
      cout << "I-" << highwayNumber << " is " << p << ", going "<< dir <<"." <<endl;
   }else{
      cout << "I-" << highwayNumber << " is " << p << ", serving I-" << highwayNumber % 100 << ", going "<< dir <<"." <<endl;
   }


   /* Type your code here. */

   return 0;
}
