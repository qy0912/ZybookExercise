#include <iostream>
using namespace std;
#include <math.h>
/*
3. Assignment 3
a. Create a class WhileLoop with main() method
b. Declare and initialize an integer variable to any value c. Find if the given value is a palindrome
*/

int main(){
    int num;
    cin >> num;
    int rm;

    int res = 0;
    int count = 0;

    int num1 = num;
    int num2 = num;

    /*
    Finding out How Many digits by keep dividing by 10
    */
    while(num1>0){
        count++;
        num1/=10;
    }

    /*
    rm is the digit from right to left. 
    */
    for(int i = 0 ; i < count ; i ++){
        rm = num2 % 10;
        res += rm* pow(10,count-i-1);
        num2/=10;
    }

    string result = num==res ? "Yes, the input integer is palindrome" : "No, the input integer is not palindrome";
    cout<< result << endl;

}