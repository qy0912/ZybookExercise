#include <iostream>
using namespace std;

/*
Memory in your C++ program is divided into two parts −

1. The stack − All variables declared inside the function will take up memory from the stack.
2. The heap − This is unused memory of the program and can be used to allocate the memory dynamically when program runs.

You can allocate memory at run time within the heap for the variable of a given type using a special operator in C++ 
which returns the address of the space allocated. This operator is called new operator.

If you are not in need of dynamically allocated memory anymore, you can use delete operator, 
which de-allocates memory that was previously allocated by new operator.

*/

class Box {
   public:
      Box() { 
         cout << "Constructor called!" <<endl; 
      }
      ~Box() { 
         cout << "Destructor called!" <<endl; 
      }
};

int main(){
    //we can define a pointer to type double and then request that the memory be allocated at execution time. 
    //We can do this using the new operator with the following statements
    double* pvalue  = NULL; // Pointer initialized with null
    pvalue  = new double;   // Request memory for the variable

    //The malloc() function from C, still exists in C++, but it is recommended to avoid using malloc() function. 
    //The main advantage of new over malloc() is that new doesn't just allocate memory, it constructs objects 
    //which is prime purpose of C++.

    *pvalue = 29494.99;     // Store value at allocated address
    cout << "Value of pvalue : " << *pvalue << endl;

    //At any point, when you feel a variable that has been dynamically allocated is not anymore required, 
    //you can free up the memory that it occupies in the free store with the ‘delete’ operator
    delete pvalue;

    //To allocate memory for an array of characters, i.e., string of 20 characters
    char* pvalue1  = NULL;         // Pointer initialized with null
    pvalue1  = new char[20];       // Request memory for the variable
    //To remove the array that we have just created the statement would look like
    delete [] pvalue1;             // Delete array pointed to by pvalue

    // The syntax of new operator, you can allocate for a multi-dimensional array
    double** pvalue2  = NULL;      // Pointer initialized with null 
    //pvalue2  = new double [3][4];  // Allocate memory for a 3x4 array

    //To release the memory for multi-dimensional array will still remain same
    delete [] pvalue2;            // Delete array pointed to by pvalue

    Box* myBoxArray = new Box[4];
    delete [] myBoxArray; // Delete array



}