#include <iostream>
using namespace std;

/*
  A pointer is a variable whose value is the address of another variable. Like any variable or constant, 
  you must declare a pointer before you can work with it.
  int    *ip;    // pointer to an integer
  double *dp;    // pointer to a double
  float  *fp;    // pointer to a float
  char   *ch     // pointer to character
*/

/*
A reference variable is an alias, that is, another name for an already existing variable. 
Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable.
References vs Pointers
References are often confused with pointers but three major differences between references and pointers are −
1. You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.
2. Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.
3. A reference must be initialized when it is created. Pointers can be initialized at any time.
*/

int main(){
    int  var = 20;   // actual variable declaration.
    int  *ip;        // pointer variable 

    ip = &var;       // store address of var in pointer variable

    cout << "Value of var variable: ";
    cout << var << endl;

    // print the address stored in ip pointer variable
    cout << "Address stored in ip variable: ";
    cout << ip << endl;

    // access the value at the address available in pointer
    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    //references using &
    int i = 17;
    int& r = i; //"r is an integer reference initialized to i"

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;

    cout << "address of i  : " << &i  << endl;
    cout << "address of r  : " << &r  << endl;

    return 0;
}