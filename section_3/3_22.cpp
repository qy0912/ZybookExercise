#include <iostream>
using namespace std;

int main() {
   
   /* Type your code here. */
   int n1;
   int n2;
   int n3;
   cin >> n1;
   cin >> n2;
   cin >> n3;
   
   int small = n1;
   
   if(n2<small){
      small = n2;   
   }
   
   if(n3<small){
      small = n3;
   }
   
   cout << small << endl;

   return 0;
}