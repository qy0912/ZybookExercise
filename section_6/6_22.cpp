#include <iostream>
using namespace std;

void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4){
   int temp = userVal1;
   userVal1 = userVal2;
   userVal2 = temp;
   temp = userVal3;
   userVal3 = userVal4;
   userVal4 = temp;
   cout << userVal1<< " " << userVal2<< " " << userVal3<< " " <<userVal4 <<endl;
}

int main() {
   /* Type your code here. Your code must call the function.  */
   int a;
   cin>>a;
   int b;
   cin>>b;
   int c;
   cin>>c;
   int d;
   cin>>d;
   SwapValues(a,b,c,d);

   return 0;
}