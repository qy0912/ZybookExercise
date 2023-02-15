#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> v;
   int temp;
   cin>>temp;
   while(temp>=0){
      v.push_back(temp);
      cin>>temp;
   }
   if(v.size()>9){
      cout<<"Too many numbers"<<endl;
   }else{
      cout<<"Middle item: "<<v.at(v.size()/2)<<endl;
   }

   return 0;
}
