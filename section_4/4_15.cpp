#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   /* Type your code here. */
   int max;
   int sum;
   int temp;
   int count = 0;
   cin>>temp;
   max = temp;
   while(temp>=0){
      if(temp>max){
         max = temp;   
      }
      sum+=temp;
      count++;
      cin>>temp;
   }
   cout<< fixed << setprecision(2) << max <<" " << 1.0*sum/count<<endl;
   
   return 0;
}
