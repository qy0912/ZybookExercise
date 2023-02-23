#include "ListItem.h"
#include <string>
#include <list>
#include <iostream>

using namespace std;

int main () {
   // TODO: Declare a list called shoppingList of type ListItem
   list<string> l;
   string item;
   getline(cin,item);
   while(item!="-1"){
      l.push_back(item);
      getline(cin,item);
   }
   for(string s: l){
      cout<<s<<endl;
   }
   return 0;
}