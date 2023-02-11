#include <iostream>
using namespace std;

int main() {
   int currentPrice;
   int lastMonthsPrice;
   
   cin >> currentPrice;
   cin >> lastMonthsPrice;

   int diff = currentPrice - lastMonthsPrice;
   float mortgage = (currentPrice * 0.051) / 12;
   /* Type your code here. */
   cout << "This house is $"<< currentPrice << ". The change is $"<<diff<<" since last month."<<endl;
   cout << "The estimated monthly mortgage is $"<<mortgage<<"."<<endl;
   

   return 0;
}
