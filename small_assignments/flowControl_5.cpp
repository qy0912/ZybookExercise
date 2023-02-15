#include <iostream>
using namespace std;
#include <math.h>
/*
5. Assignment 5
a. Create a class BreakTest with main() method
b. Find and print all prime numbers between 1 and 100
*/

int main(){
    int count = 0;
    for(int i = 1 ; i < 101 ; i++){
        bool isPrime = true;
        if(i == 1 || i==2){
            isPrime = false;
        }else{
            for(int j = 2 ; j < sqrt(i)+1 ; j ++){
                if(i%j == 0){
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime){
            count++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<"Total prime number: "<< count <<endl;
}