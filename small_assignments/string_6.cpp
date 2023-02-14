
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
 6) Given input as : “Softra Services Limited” < first char from 1st word, 2nd char from
 second word, 3rd char from 3rd word etc.>> Output should be in capitals at the end.
 Output should be like: SEM
*/
int main() {
    string s;
    getline(cin,s);
    stringstream X(s);

    string word;
    string output = "";
    int count = 0;

    while(getline(X,word,' ')){
        if(word.size()>count){
            output.push_back(toupper(word.at(count)));
            count++;
        }
    }
    cout<<output<<endl;
}