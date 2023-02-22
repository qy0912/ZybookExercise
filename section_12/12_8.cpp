#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

/* Define your function here */ 
double StepsToMiles(int steps){
   if(steps<0){
      throw runtime_error("Exception: Negative step count entered.");
   }
   return steps/2000.0;
}

int main() {

   /* Type your code here. */
   double steps;
   cin>>steps;
   try{
      cout<<fixed<<setprecision(2)<<StepsToMiles(steps)<<endl;
   }catch(runtime_error& e){
      cout<<e.what()<<endl;
   }

   return 0;
}
