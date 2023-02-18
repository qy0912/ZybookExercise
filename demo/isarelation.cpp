/*
When creating a class, instead of writing completely new data members and member functions, the programmer can designate 
that the new class should inherit the members of an existing class. This existing class is called the base class, 
and the new class is referred to as the derived class.

A class can be derived from more than one classes, which means it can inherit data and functions from multiple base classes

class derived-class: access-specifier base-class

If the access-specifier is not used, then it is private by default, otherwise it can be any one from public, protected or private
*/


/*
Types of Inheritence
1. Public Inheritance − When deriving a class from a public base class, public members of the base class become public members of the derived class and protected members of the base class become protected members of the derived class. A base class's private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.

2. Protected Inheritance − When deriving from a protected base class, public and protected members of the base class become protected members of the derived class.

3. Private Inheritance − When deriving from a private base class, public and protected members of the base class become private members of the derived class.
*/

/*
Multiple Inheritence : class derived-class: access baseA, access baseB....
*/

#include <iostream>
using namespace std;
// Base class
class Shape {
   protected:
      int width;
      int height;

   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
};

// Derived class
class Rectangle : public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

int main(void) {
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}

//https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm