#include <iostream>
#include <deque>

using namespace std;

int main() {
   string line;
   bool result;

   /* Type your code here. */
   deque<char> dq;
   getline(cin,line);
   for(int i = 0;i< line.size();i++){
      if(isalpha(line.at(i))){
         dq.push_back(line.at(i));
      }
   }
   result = true;
   while(dq.size()>1){
      
      if(dq.front()!=dq.back()){
         result =false;
         break;
      }
      dq.pop_front();
      dq.pop_back();
   }
   if(result){
      cout<<"Yes, \""<<line<<"\" is a palindrome."<<endl;
   }else{
      cout<<"No, \""<<line<<"\" is not a palindrome."<<endl;
   }
   
   return 0;
}
