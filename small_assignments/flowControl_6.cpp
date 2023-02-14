#include <iostream>
using namespace std;
#include <math.h>
/*
6. Assignment 6
a. Create a class ContinueTest with main() method b. Create a loop to iterate from 1 to 100
c. Print only the even numbers
*/

int main(){
    for(int i = 1 ; i < 101 ; ++i){
        if(i%2 == 1){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<endl;
}