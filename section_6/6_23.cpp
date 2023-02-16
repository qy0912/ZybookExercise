#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
string CoinFlip(){
   int res = rand()%2;
   if(res == 0){
      return "Tails";
   }else{
      return "Heads";
   }
}

int main() {
   // Add more variables as needed
   
   srand(2);  // Unique seed
   int count;
   cin>>count;
   for(int i = 0 ; i < count ; i++){
      cout << CoinFlip() << endl;
   }
   /* Type your code here */

   return 0;
}
