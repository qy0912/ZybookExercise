#include <iostream>
using namespace std;

int main() {

   string input;
   getline(cin,input);
   
   while(input!="Done"&&input!="done"&&input!="d"){
      for(int i = 0; i < input.size() ; i++){
         cout<<input.at(input.size()-1-i);
      }
      cout<<endl;
      getline(cin,input);
   }
   
   return 0;
}
