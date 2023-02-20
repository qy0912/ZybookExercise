#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void lineHandler(string line,char c, bool& exist){
   stringstream s(line);
   string word;
   while(!s.eof()){
      s>>word;
      if(word.at(0)==c){
         exist = true;
         cout<<word<<endl;
      }
   }
}

int main() {
   bool exist = false;

   
   string filename;
   cin>>filename;
   char c;
   cin>> c;
   ifstream file;
   file.open(filename+".txt");
   string line;
   while(getline(file,line)){
      lineHandler(line,c,exist);
   }
   if(!exist){
      cout<<"No synonyms for "<<filename<<" begin with " << c << "."<< endl;
   }
   
   

   return 0;
}
