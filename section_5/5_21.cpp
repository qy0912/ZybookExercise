#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */
   int size;
   cin>>size;
   
   double max = 0.0;
   vector<double> v(size);
   for(int i = 0 ; i < size ; i++){
      cin>>v.at(i);
      if(v.at(i)>max){
         max=v.at(i);
      }
   }
   
   for(int i = 0 ; i < size ; i++){
      cout<< fixed << setprecision(2) << v.at(i)/max<<" ";
   }
   cout<<endl;
   return 0;
}
