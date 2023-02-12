#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   /* Type your code here. */
   int Age;
   int Weight;
   int Heart;
   int Time;
   
   cin >> Age;
   cin >> Weight;
   cin >> Heart;
   cin >> Time;
   
   cout << fixed << setprecision(2) <<"Calories: "<< ( (Age * 0.2757) + (Weight * 0.03295) + (Heart * 1.0781) - 75.4991 ) * Time / 8.368 <<" calories"<<endl;

   return 0;
}
