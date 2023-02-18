/*
The word polymorphism means having many forms
*/

/*The reason for the incorrect output is that the call of the function area() is being set once by the compiler as 
the version defined in the base class. This is called static resolution of the function call, or static linkage - 
the function call is fixed before the program is executed. This is also sometimes called early binding because the area() function 
is set during the compilation of the program.

But now, let's make a slight modification in our program and precede the declaration of area() in the Shape class 
with the keyword virtual 

A virtual function is a function in a base class that is declared using the keyword virtual. Defining in a base class a virtual function, with another version in a derived class, signals to the compiler that we don't want static linkage 
for this function.
*/

#include <iostream> 
using namespace std;

/*
You create an abstract class by declaring at least one pure virtual member function. That's a virtual function declared by 
using the pure specifier ( = 0 ) syntax. Classes derived from the abstract class must implement the pure virtual function or they, 
too, are abstract classes.
*/

class Shape {
   protected:
      int width; 
      int height;
      
   public:
      Shape(int a = 0, int b = 0){
         cout << "inside const of Shape" << a << b << endl;
         width = a;
         height = b;
      }
      /*
      virtual int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }*/

      //pure virtual function
      //The = 0 tells the compiler that the function has no body and above virtual function will be called pure virtual function.
      virtual int area() = 0;
};

class Rectangle: public Shape {
   public:

      Rectangle() {
         cout << "inside Default Rectangle Constructor" << endl;
      }

      Rectangle( int a, int b):Shape(a, b) {

          cout << "inside Rectangle Constructor" << endl;
          cout << a;
          cout << b;
       }
      
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) {
          cout << "inside Triangle Constructor" << endl;
          cout << a;
          cout << b;
       }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

int main() {
   Shape* shape;

   //Shape shap;

   Rectangle rec(10,5);
   Triangle  tri(10,5);

   Rectangle rec1;
    

   // store the address of Rectangle
   shape = &rec;
   
   // call rectangle area.
   cout << shape->area() << endl;

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area.
   cout << shape->area() << endl;
   
   return 0;
}