#include "Encyclopedia.h"
#include <iostream>

void Encyclopedia::SetEdition(string s){
   edition = s;
}
void Encyclopedia::SetNumPages(int s){
   nPages = s;
}
string Encyclopedia::GetEdition(){
   return edition;
}
int Encyclopedia::GetNumPages(){
   return nPages;
}
void Encyclopedia::PrintInfo(){
   Book::PrintInfo();
   cout<<"   Edition: "<<edition<<endl;
   cout<<"   Number of Pages: "<<nPages<<endl;
}