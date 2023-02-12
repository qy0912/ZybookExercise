#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#include <sstream>


vector<float> to_float(string s){
   vector<float> ret = {};
   string word;
   stringstream X(s);
   
   for(int i = 0 ; i < 3 ; i++){
      getline(X, word, ' ');
      if(word == ""){
         i -=1;
         continue;
         }
      ret.push_back( stof(word));
      }
   return ret;
   };

int count = 0;
float print_res(vector<float> v){
   count +=1;
   float area = v.at(1)*v.at(2);
   float carpet = area*1.2*v.at(0);
   float labor = area *0.75;
   float tax = (carpet + labor)*0.07;
   float cost = carpet + labor + tax;
   cout << "Order #"<<count<<endl;
   cout << "Room: "<< fixed << setprecision(0)<< area << " sq ft" <<endl;
   cout << "Carpet: $" << fixed << setprecision(2) << carpet <<endl;
   cout << "Labor: $" << fixed << setprecision(2) <<labor <<endl;
   cout << "Tax: $" << fixed << setprecision(2) <<tax <<endl;
   cout << "Cost: $" << fixed << setprecision(2) <<cost <<endl;
   return cost;
   }

int main() {
 
   /* Type your code here. */
   vector<float> v;

   
   string s;
   getline (cin, s);
   
   v = to_float(s);
   float cost1 = print_res(v);
   

   
   
   getline (cin, s);
   cout << "\n";
   v = to_float(s);
   float cost2 = print_res(v);
   
   
   
   cout << "\n";
   
   getline (cin, s);
   v = to_float(s);
   float cost3 = print_res(v);
   
   cout << "\n";
   cout << "Total Sales: $" << fixed << setprecision(2) <<cost1+cost2+cost3 <<endl;

   return 0;
}
