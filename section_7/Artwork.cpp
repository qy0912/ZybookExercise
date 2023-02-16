#include "Artwork.h"
#include <iostream>

Artwork::Artwork(){
   title = "unknown";
   yearCreated = -1;
}

Artwork::Artwork(string a, int b, Artist art){
   title = a;
   yearCreated = b;
   artist = art;
}

string Artwork::GetTitle(){
   return title;
}
int Artwork::GetYearCreated(){
   return yearCreated;
}

void Artwork::PrintInfo(){
   artist.PrintInfo();
   cout<<"Title: "<<title<<", "<<yearCreated<<endl;
}