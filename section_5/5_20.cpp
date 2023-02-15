#include <iostream>
#include <vector>
using namespace std;

int main() {
   int size;
   int cap;
   cin>>size;
   vector<int> v(size);
   for(int i = 0 ; i<size ;i++){
      cin>>v.at(i);
   }
   cin>>cap;
   for(int i = 0; i < size ; i ++){
      if(v.at(i)<=cap){
         cout<<v.at(i)<<",";
      }
   }
   cout<<endl;
   

   return 0;
}
