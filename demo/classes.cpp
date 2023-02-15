/*
A class is a template for objects, and an object is an instance of a class.
When the individual objects are created, they inherit all the variables and functions from the class.

Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".
A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

An object is a grouping of data (variables) and operations that can be performed on that data (functions).
An object has operations that a user can apply. The object's internal data, and possibly other operations, 
are hidden from the user.
*/
#include <iostream>
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

// Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
};

/*
Methods are functions that belongs to the class.
There are two ways to define functions that belongs to a class:
Inside class definition
Outside class definition
*/
//method inside class
/*
A member function's definition may appear within the class definition, known as an 
inline member function.
*/
class MyClass1 {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!" << endl;
    }
};
//method outside class
class MyClass2 {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass2::myMethod() {
  cout << "Hello World!" << endl;
}

/*
A programmer defining a class first declares member functions after the word "public:"
in the class definition. A function declaration provides the function's name, return type, 
and parameter types, but not the function's statements.

A function definition provides a class name, return type, parameter names and types, 
and the function's statements. A member function definition has the class name and 
two colons (::), known as the scope resolution operator, preceding the function's name. 
A member function definition can access private data members.
*/


/*
A constructor in C++ is a special method that is automatically called when an object of a class is created.
To create a constructor, use the same name as the class, followed by parentheses ():
*/
class MyClass3 {     // The class
  public:           // Access specifier
    MyClass3() {     // Constructor
      cout << "Hello World within constructor!" << endl;
    }
};

class MyCar {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    MyCar(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

/*
Just like functions, constructors can also be defined outside the class. First, declare the constructor inside the class, 
and then define it outside of the class by specifying the name of the class, followed by the scope resolution :: operator, 
followed by the name of the constructor (which is the same as the class):
*/

/*
In C++, We can have more than one constructor in a class with same name, as long as each has a different list of arguments.
This concept is known as Constructor Overloading and is quite similar to function overloading. 
*/

/*
C++ has a special class member function, a constructor, called automatically when 
a variable of that class type is declared, and which can initialize data members.
A constructor callable without arguments is a default constructor.
A constructor has the same name as the class. A constructor function has no return type, not even void
*/

class MyCar2 {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    MyCar2(string x, string y, int z); // Constructor declaration
    MyCar2(string x,string y); //overloaded constructor
};

// Constructor definition outside the class
MyCar2::MyCar2(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}
//overloaded constructor definition outside the class
MyCar2::MyCar2(string x, string y) {
  brand = x;
  model = y;
}


/*
In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

By default, all members of a class are private if you don't specify an access specifier:
*/

class MyClass4 {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

//A copy constructor is a member function that initializes an object using another object of the same class
class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1) { 
      cout << "inside normal constructor" << endl;
      x = x1; y = y1; 
    }
 
    // Copy constructor
    Point(const Point &p1) {
      cout << "inside copy constructor" << endl;
      x = p1.x; y = p1.y; 
    }
 
    int getX() {  return x; }
    int getY() {  return y; }
};


int main(){
MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;

  //multiple objects
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

  //
  MyClass1 myObj1;     // Create an object of MyClass
  myObj1.myMethod();  // Call the method

  MyClass2 myObj2;     // Create an object of MyClass
  myObj2.myMethod();  // Call the method

  MyClass3 myObj3;    // Create an object of MyClass (this will call the constructor)

  // Create Car objects and call the constructor with different values
  MyCar carObj3("BMW", "X5", 1999);
  MyCar carObj4("Ford", "Mustang", 1969);

  // Print values
  cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";
  cout << carObj4.brand << " " << carObj4.model << " " << carObj4.year << "\n";

  MyCar2 carObj5("BMW", "X5", 1999);
  MyCar2 carObj6("Ford", "Mustang", 1969);

  MyCar2 carObj7("BMW", "X5");
  MyCar2 carObj8("Honda", "Brio");

  // Print values
  cout << carObj5.brand << " " << carObj5.model << " " << carObj5.year << "\n";
  cout << carObj6.brand << " " << carObj6.model << " " << carObj6.year << "\n";

  cout << carObj7.brand << " " << carObj7.model << " " << carObj7.year << "\n";
  cout << carObj8.brand << " " << carObj8.model << " " << carObj8.year << "\n";

  MyClass4 myObj9;
  myObj9.x = 25;  // Allowed (public)
  //myObj9.y = 50;  // Not allowed (private)

  Point p1(10, 15); // Normal constructor is called here
  Point p2 = p1; // Copy constructor is called here

  /*
  const keyword
  A function declared with the const keyword is a constant function. Constant functions 
  are popular due to their ability to prevent accidental changes to the object’s value.
  Declaring a member function with the const keyword specifies that the function is a "read-only" 
  function that doesn't modify the object for which it's called. A constant member function can't modify 
  any non-static data members or call any member functions that aren't constant

  A mutator function may modify ("mutate") a class' data members.
  An accessor function accesses data members but does not modify a class' data members.
 
  The keyword const after a member function's name and parameters causes 
  a compiler error if the function modifies a data member. If a const member function 
  calls another member function, that function must also be const.

  Accessor functions usually are defined as const to make clear that data members 
  won't be changed.
  */

 /*
 Just the class definition appears in the .h. All the function definitions appear 
 in a .cpp file.

 ClassName.h contains the class definition, including data members and member function declarations.
 ClassName.cpp contains member function definitions.
 */
}
