#include <iostream>
using namespace std;
#include <math.h>
/*
5. Assignment 5
a. Create a class BreakTest with main() method
b. Find and print all prime numbers between 1 and 100
*/

int main(){
    for(int i = 1 ; i < 101 ; i++){
        bool isPrime = true;
        if(i == 1 || i==2){
            isPrime = false;
        }else{
            for(int j = 2 ; j < i/2+1 ; j ++){
                if(i%j == 0){
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}