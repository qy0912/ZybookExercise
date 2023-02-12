#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;

   cin >> x;
   cin >> y;
   cin >> z;
   /* Type your code here. Note: Include the math library above first. */
   cout << pow(x,z) << " " << pow(x,pow(y,z)) << " " << fabs(y) << " " << sqrt(pow(x*y,z)) << endl ;

   return 0;
}
