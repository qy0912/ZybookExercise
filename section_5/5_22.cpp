#include <iostream>
#include <vector>

using namespace std;



int main() {

   int size;
   cin>>size;
   
   string c;
   vector<string> v(size);
   for(int i = 0 ; i < size ; i++){
      cin>>v.at(i);
   }
   cin>>c;
   for(int i = 0 ; i < size ; i++){
      if(v.at(i).find(c) !=std::string::npos){
         cout<<v.at(i)<<",";
      }
   }
   cout<<endl;

   return 0;
}
