#include <iostream>
using namespace std;
#include <math.h>
/*
3. Assignment 3
a. Create a class WhileLoop with main() method
b. Declare and initialize an integer variable to any value c. Find if the given value is a palindrome
*/

int main(){
    int a = 0;
    int b = 1;
    cout<< a << " " << b << " ";
    int c = a+b;
    int count = 0;
    int temp_a;
    int temp_b;
    int temp_c;
    do {
        cout<<c<<" ";
        temp_a = a;
        temp_b = b;
        temp_c = c;
        a = temp_b;
        b = temp_c;
        c = a + b;
        count++;
    }
    while (count<10-2);
    cout<<endl;


}