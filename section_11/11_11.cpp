#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write function to create and output all permutations of the list of names.
void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList) {
   if(nameList.size()==0){
      for(int i = 0 ; i<permList.size()-1 ; i++){
         cout<< permList.at(i) << ", ";
      }
      cout<<permList.at(permList.size()-1);
      cout<<endl;
   }
   for(int i = 0 ; i < nameList.size() ; i++){
      vector<string> cp_perm = permList;
      vector<string> cp_name = nameList;
      string name = nameList.at(i);
      cp_name.erase(cp_name.begin()+i);
      cp_perm.push_back(name);
      PrintAllPermutations(cp_perm,cp_name);
   }
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;
   cin>>name;
   while(name!="-1"){
      nameList.push_back(name);
      cin>>name;
   }
   PrintAllPermutations(permList,nameList);

   // TODO: Read a list of names into nameList; stop when -1 is read. Then call recursive function.
   
   return 0;
}