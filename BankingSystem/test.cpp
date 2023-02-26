/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <ctime>
#include "Customer.h"
using namespace std;
class A{
    public:
        int a = 332;  
        virtual void aba() = 0 ;
};

class B: public A{
    public:
        void aba(){cout<<"aba"<<endl;}
};
bool dateValidation(string date){
    struct tm tm;

    if (strptime(date.c_str(), "%d/%m/%Y", &tm))
        return true;
    else
        return false;
}

void tfunction(vector<A*>& v){
    v.at(0)->aba();
}
int main()
{

    B test;
    vector<A*> v;
    v.push_back(&test);
    tfunction(v);
}
