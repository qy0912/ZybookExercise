
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
4) Find the substring which is having max length, if two strings lengths are equal
  Sample input 1 : “Hi How are you”
 Sample output 1 : How
 Sample input 2 : “This is java String program ”
 Sample output 2 : program
*/
int main() {
    string s;
    getline(cin,s);
    stringstream X(s);

    string word;
    string longest;
    int longest_len=0;
    while(getline(X,word,' ')){
        if(word.size()>longest_len){
            longest_len = word.size();
            longest=word;
        }
    }
    cout<<longest<<endl;
}