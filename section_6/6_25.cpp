#include <iostream>
using namespace std;

int Fibonacci(int n) {
   if(n<0){
      return -1;
   }
   if(n==0){
      return 0;
   }
   if(n == 1){
      return 0;
   }
   if(n == 2){
      return 1;
   }
   int a=0;
   int b=1;
   int temp;
   for(int i = 0 ; i <n-1 ; i++){
      temp = b;
      b = a+b;
      a = temp;
   }
   return b;   
   
}

int main() {
   int startNum;
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}