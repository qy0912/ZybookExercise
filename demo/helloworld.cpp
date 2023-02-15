#include <iostream>
using namespace std;

/*
iostream: iostream stands for standard input-output stream. This header file contains definitions of objects 
like cin, cout, cerr, etc
*/

/*
The using namespace statement just means that in the scope it is present, make all the things under the 
std namespace available without having to prefix std:: before each of them.
*/

/*
The cout object, together with the << operator, is used to output values/print text
To insert a new line, you can use the \n character:
Another way to insert a new line, is with the endl manipulator
*/

//A single line comment
/* A block comment */

int main(){
    cout << "!!!Hello World of Programming!!!" << endl; // It prints Hello World
    cout << "welcome to the world of C++ \n";
    cout << "One of the popular OOP langauge" << endl;
    cout << "Lets learn it khurtya";
	return 0;
}

/*
g++ command is a GNU c++ compiler invocation command, which is used for preprocessing, compilation, 
assembly and linking of source code to generate an executable file. The different “options” of g++ command 
allow us to stop this process at the intermediate stage.

Terminal -> Run Build Task 
*/