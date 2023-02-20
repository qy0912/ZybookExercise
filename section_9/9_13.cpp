#include <iostream>
#include <fstream>

using namespace std;

void lineHandler(string line){
   string name;
   string category;
   string description;
   string avaliability;
   size_t spos = 0;
   size_t epos = line.find("\t");
   category = line.substr(spos,epos);
   line.replace(epos,1,"_");
   
   spos = epos+1;
   epos = line.find("\t");
   name = line.substr(spos,epos-spos);
   line.replace(epos,1,"_");
   
   spos = epos+1;
   epos= line.find("\t");
   description = line.substr(spos,epos-spos);
   line.replace(epos,1,"_");
   
   spos = epos+1;
   epos= line.size();
   avaliability = line.substr(spos,epos-spos);

   if(avaliability=="Available"){
      cout<<name<<" ("<<category<<") -- "<<description<<endl;
   }
   // cout << name << "-"  << category << "-" << description << "-" << avaliability << "-" <<endl;
   
}

int main() {
   ifstream s;
   string filename;
   cin>>filename;
   s.open(filename);
   string line;
   while(getline(s,line)){
      lineHandler(line);
   }
   s.close();
   
   return 0;
}