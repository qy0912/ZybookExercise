#include <iostream>
using namespace std;

int main() {
   int input;
   cin >> input;
   while(input>0){
      cout << input%2;
      input = input/2;
   }
   cout<<endl;

   return 0;
}
