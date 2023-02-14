#include <iostream>
#include <string>
using namespace std;
/*
 3) Replace the first and last characters in the given string
 Sample input : Hello World
 Sample output: dello WorlH
 */
int main() {
    string s;
    getline(cin,s);
    
    char first = s.at(0);
    char last = s.at(s.size()-1);

    s.replace(0,1,"");
    s.replace(s.size()-1,1,"");
    s.insert(s.begin(),last);
    s.push_back(first);

    cout << s <<endl;
}
