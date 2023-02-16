#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;

   double b1;
   double h1;
   double b2;
   double h2;
   cin>>b1;
   cin>>h1;
   cin>>b2;
   cin>>h2;
   
   triangle1.SetBase(b1);
   triangle1.SetHeight(h1);
   triangle2.SetBase(b2);
   triangle2.SetHeight(h2);
   
   triangle1 = triangle1.GetArea()<=triangle2.GetArea() ? triangle1:triangle2;
   
       
   cout << "Triangle with smaller area:" << endl;
   triangle1.PrintInfo();
   // TODO: Determine smaller triangle (use GetArea())  
   //       and output smaller triangle's info (use PrintInfo())
   
   return 0;
}