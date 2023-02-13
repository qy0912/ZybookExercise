#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   string s1;
   string s2;
   string s3;
   
   cin>>s1;
   cin>>s2;
   cin>>s3;

   
   if(s3.size()!=0){
      cout << s3 << ", "   <<s1.at(0)<<"."<<s2.at(0)<<"."<<endl;
   }else{
      cout << s2 << ", " << s1.at(0)<< "." <<endl;
   }

   return 0;
}