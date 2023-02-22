#include <iostream>
#include <vector>
using namespace std;

int find_max(vector<int> v){
   int max = v[0];
   for(int i = 0 ; i < v.size();i++){
      if(v.at(i)>max){
         max= v.at(i);
         }
      }
   return max;
   }

int main() {
   cin.exceptions(ios::failbit); // Allow cin to throw exceptions
   int val1;
   int val2;
   int val3;
   int max;
   
   val1 = 0;
   val2 = 0;
   val3 = 0;
   
   vector<int> v;
   
   /* Type your code here. */
   int count = 0;
   try{
      
      cin>>val1;
      count+=1;
      v.push_back(val1);
      
      cin>>val2;
      count+=1;
      v.push_back(val2);
      
      cin>>val3;
      v.push_back(val3);
      
      cout<<find_max(v)<<endl;
   }catch( ios_base::failure){
      cout<<count<<" "<<"input(s) read:" <<endl;
      if(count == 0 ){
         cout<<"No max"<<endl;   
      }else{
         cout<<"Max is "<<find_max(v)<<endl;
         }
      }
   return 0;
}
