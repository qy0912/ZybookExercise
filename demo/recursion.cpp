/*
When function is called within the same function, it is known as recursion in C++. 
The function which calls the same function, is known as recursive function.
*/

#include<iostream>  
using namespace std;  

int factorial(int n)  
{  
    if(n<0)  
        return(-1); /*Wrong value*/ 

    if(n==0)  
        return(1);  /*Terminating condition*/  
    else  
    {  
        return(n*factorial(n-1));      
    }  
}

int main()  
{  
    int factorial(int);  
    int fact,value;  
    cout<<"Enter any number: ";  
    cin>>value;  
    fact=factorial(value);  
    cout<<"Factorial of a number is: "<<fact<<endl;  
    return 0;  
} 

//https://www.javatpoint.com/cpp-recursion

