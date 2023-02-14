#include <iostream>
using namespace std;

/*
1. Assignment 1
a. Create a class SwitchCaseTest with main() method
b. Declare and initialize a character variable with any alphabet
c. Find if the character is a vowel and print the result
*/

int main(){
    char c;
    cin >> c;
    switch(toupper(c)) {
    case 'A':
        cout<< "Input Character '" << c << "' is a vowel."<<endl;
        break;
    case 'E':
        cout<< "Input Character '" << c << "' is a vowel."<<endl;
        break;
    case 'I':
        cout<< "Input Character '" << c << "' is a vowel."<<endl;
        break;
    case 'O':
        cout<< "Input Character '" << c << "' is a vowel."<<endl;   
        break;
    case 'U':
        cout<< "Input Character '" << c << "' is a vowel."<<endl;
        break;
    default:
        cout<< "Input Character '" << c << "' is not a vowel."<<endl;
    }
    return 0;
}