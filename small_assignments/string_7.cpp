
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
 7) Get the next character for each and every character of the given String
 Sample input : hello java
 Sample output: ifmmp kbwb
*/
int main() {
    string s;
    getline(cin,s);
    for(int i = 0 ; i < s.size() ; i++){
        if(isalpha(s.at(i))){
            s.at(i) = (char)(s.at(i)+1);
        }
    }
    cout<<s<<endl;
}