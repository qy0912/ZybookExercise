#include <iostream>
using namespace std;

/* TODO: Write recursive DrawTriangle() function here. */
void DrawTriangle(int n){
   if(n == -1){
      return;
   }
   DrawTriangle(n-2);
   for(int i = 0 ; i < 9-n/2 ; i++){
      cout<<" ";
   }
   for(int i = 0 ; i <n ; i++){
      cout<<"*";
   }
   cout<<endl;
 
}


int main() {
   int baseLength;
   
   cin >> baseLength;
   DrawTriangle(baseLength);
   return 0;
}