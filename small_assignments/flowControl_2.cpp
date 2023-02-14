#include <iostream>
using namespace std;

/*
2. Assignment 2
a. Create a class ForLoopTest with main() method
b. Declare and initialize an integer variable to any value c. Find and print the factorial of the variable using for loop
*/

int main(){
    int num;
    cin >> num;

    int res = 1;
    for(int i = 1 ; i < num+1 ; i++){
        res = res * i;
    }
    cout<< "The factorial of the input is: " << res << endl;

}