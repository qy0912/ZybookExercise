#include <iostream>
#include <vector>
#include <stdexcept>      // For std::out_of_range
using namespace std;

int main() {
   vector<string> names = { "Ryley", "Edan", "Reagan", "Henry", "Caius", "Jane", "Guto", "Sonya", "Tyrese", "Johnny" };
   int index;

   cin >> index;
   
   /* Type your code here. */
   try{
      cout<< names.at(index)<<endl;
   }catch(std::out_of_range& e){
      cout<<"Exception! "<<e.what()<<endl;
      if(index>9){
         cout<<"The closest name is: Johnny"<<endl;
      }
      if(index<0){
         cout<<"The closest name is: Ryley"<<endl;
      }
      
   }

   return 0;
}
