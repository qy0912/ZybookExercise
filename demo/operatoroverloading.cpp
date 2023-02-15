#include <iostream>
using namespace std;

/*
In C++, we can make operators to work for user defined classes. This means C++ has the ability to provide the operators 
with a special meaning for a data type, this ability is known as operator overloading.
For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +.
Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined.
Like any other function, an overloaded operator has a return type and a parameter list.
*/

class Box {
    private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box

   public:
      Box(){
         cout << "inside default Constructor of Box" << endl;
      }

      ~Box(){
         cout << "inside destructor of Box" << endl;
      }

      Box(const Box &bx){
         cout << "inside Copy Constructor of Box" << endl;
     }

      double getVolume(void) {
         return length * breadth * height;
      }
      void setLength( double len ) {
         length = len;
      }
      void setBreadth( double bre ) {
         breadth = bre;
      }
      void setHeight( double hei ) {
         height = hei;
      }
      
      // Overload + operator to add two Box objects.
      Box operator+(const Box& b) {
         cout << "inside operator+" << endl;
         Box box; //default constr
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         cout << &box << " is address of Box inside operator+" << endl;
         return box;
      }

      Box operator=(const Box& b) {
         cout << "inside operator=" << endl;
         this->length = b.length;
         this->breadth = b.breadth;
         this->height = b.height;
      }
};
//Box Box3; //global memory
int main(){
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   //Box Box3;                // Declare Box3 of type Box //It will call default constructor
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   cout << &Box1 << " is address of Box1 inside main" << endl;
   cout << &Box2 << " is address of Box2 inside main" << endl;

   // Add two object as follows:
   Box Box3 = Box1 + Box2; //
   cout << &Box3 << " is address of Box3 inside main" << endl;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   Box Box4 = Box3;

   return 0;
}