#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // A vector to hold the user's input integers

   int len;
   cin>>len;
   userInts.resize(len);
   for(int i = 0 ; i < len ; i++ ){
      cin>>userInts.at(i);
   }
   for(int i = 0 ; i < len ; i++){
      cout<<userInts.at(userInts.size()-1-i)<<",";
   }
   cout<<endl;
   return 0;
}
