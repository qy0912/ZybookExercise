/*
main advantages of exception handling
1) Separation of Error Handling code from Normal Code:
2) Functions/Methods can handle any exceptions they choose
3) Grouping of Error Types:

Exception handling in C++ consists of three keywords: try, throw and catch:
*/

/*
When an exception is thrown, all objects created inside the enclosing try block are destructed 
before the control is transferred to catch block.
*/

#include <iostream>
using namespace std;

void fun(int *ptr, int x) throw (int *, int) // Dynamic Exception specification
{
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    /* Some functionality */
}

class Test {
public:
    Test() { cout << "Constructor of Test " << endl; }
    ~Test() { cout << "Destructor of Test " << endl; }
};
 
int main()
{
   int x = -1;
   //int x = 1;

   // Some code
   cout << "Before try \n";
   try {
      cout << "Inside try \n";
      if (x < 0)
      {
        cout << "inside if cond in try" << endl;
        throw x;
        cout << "After throw (Never executed) \n";
      }
   }
   catch (char *excp)  {
        cout << "Exception Caught for string " << excp;
   }
    
   catch (int x ) {
      cout << "Exception Caught for int \n";
   }

   catch (...)  {
        cout << "Default Exception\n";
   }
 
   cout << "After catch (Will be executed) \n";

   cout << "+++++++++++++++++" << endl;

   try {
       fun(NULL, 0);
    }
    catch(...) {
        cout << "Caught exception from fun()";
    }

   

   cout << "+++++++++++++++++" << endl;

   try {
        Test t1;
        //throw 10;
    }
    catch (int i) {
        cout << "Caught " << i << endl;
    }

    while(true){}

    return 0;
   
}

//https://www.geeksforgeeks.org/exception-handling-c/