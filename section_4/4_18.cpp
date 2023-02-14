#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   int start;
   int end;
   cin>>start;
   cin>>end;
   if(start>end){
      cout<<"Second integer can't be less than the first."<<endl;
      return 0;
   }
   
   while(start<=end){
      cout<<start<<" ";
      start+=5;
   }
   cout<<endl;
   return 0;
}
