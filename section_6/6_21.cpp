#include <iostream>
using namespace std;

double KiloToPounds(double kilos) {
   // This statement intentionally has an error. 
   return (kilos *2.204);
}

int main() {
   double kilos;
   double pounds;
   
   cin >> kilos;
   
   pounds = KiloToPounds(kilos);
   cout << pounds << " lbs" << endl;
   
   return 0;
}