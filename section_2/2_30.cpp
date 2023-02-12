#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   
   /* A penny is worth 1 cent.
   A nickel is worth 5 cents.
   A dime is worth 10 cents.
   A quarter is worth 25 cents. */
   cin >> quarters;
   cin >> dimes;
   cin >> nickels;
   cin >> pennies;
   dollars = quarters * 0.25 + dimes * 0.1 + nickels * 0.05 + pennies * 0.01;
   cout << fixed << setprecision(2) << "Amount: $" << dollars << endl;
   
   return 0;
}