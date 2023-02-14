
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
 5) Given input as : “Softra Services Limited”
 Output should be like: SSL
*/
int main() {
    string s;
    getline(cin,s);
    stringstream X(s);

    string word;
    string output = "";

    while(getline(X,word,' ')){
        if(word.size()>1){
            output.push_back(word.at(0));
        }
    }
    cout<<output<<endl;
}