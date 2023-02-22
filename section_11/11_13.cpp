#include <iostream>
using namespace std;

int DigitCount(int n){

   if(n<10){
      return 1;
   }
   return DigitCount(n/10)+1;
}


int main() {
   int num;
   int digits;

   cin >> num;
   digits = DigitCount(num);
   cout << digits << endl;
   return 0;
}
