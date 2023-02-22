#include <iostream>

using namespace std;

void PrintNumPattern(int num1,int num2){
   cout<< num1 <<" ";
   if(num1<0){
      return;
   }
   PrintNumPattern(num1-num2,num2);
   cout << num1<<" ";
}

int main() {
   int num1;
   int num2;

   cin >> num1;
   cin >> num2;
   PrintNumPattern(num1, num2);
   
   return 0;
}