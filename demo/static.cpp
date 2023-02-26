// C++ program to demonstrate static
// variables inside a class
 
#include<iostream>
using namespace std;
 
class GfG
{
public:
    static int i;

     
    GfG()
    {
        cout << "inside constr " << endl;
        i = i+1;
    };
};
 
int GfG::i = 0;
 
int main()
{
    GfG obj1;
    GfG obj2;
    // prints value of i
    cout << obj1.i << endl;
    cout << obj2.i << endl;
}
