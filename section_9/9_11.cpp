#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
   string filename;
   cin>>filename;

   ifstream s;
   s.open(filename);
   string line;
  
   while( getline(s,line)){
      line.replace(line.size()-9,9,"info.txt");
      cout << line <<endl;
   }
   
   s.close();

   return 0;
}
