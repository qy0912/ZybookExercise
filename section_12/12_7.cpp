#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
   int userNum;
   int divNum;
   int result;
   cin.exceptions(ios::failbit);       // Allow cin to throw exceptions

   /* Type your code here. */
   try{
      cin>>userNum;
      cin>>divNum;
      if(divNum==0){
         throw runtime_error("Runtime Exception: Divide by zero!");
      }
      cout<<userNum/divNum<<endl;
   }catch (ios_base::failure& f){
      cout<<"Input Exception: "<<f.what()<<endl;
   }
   catch(runtime_error& e){
      cout<<e.what()<<endl;
   }

   return 0;
}
