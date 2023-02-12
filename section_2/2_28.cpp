#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

   /* Type your code here. */
   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;
   
   long long n1 = num1;
   long long n2 = num2;
   long long n3 = num3;
   long long n4 = num4;
   
   long long res = n1 * n2 * n3 * n4;
   
   cout   << num1 * num2 * num3 * num4 << " " << ( num1 + num2 + num3 + num4)/ 4<< endl;
   cout << fixed << setprecision(3)   << res*1.0 << " " << ( num1 + num2 + num3 + num4)/ 4.0<< endl;
   return 0;
}
