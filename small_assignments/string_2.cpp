#include <iostream>
#include <string>
using namespace std;

/*
 2) Remove all small ‘x’ and append at the end of the string
 Sample input : abcxXXcxerxxXXwer
 Sample output: abcXXcerXXwerxxxx
*/

int main(){
    string s;
    cin>>s;

    int index;
    int count = 0;

    while(s.find("x")!=string::npos){
        index = s.find("x");
        s.replace(index,1,"");
        count++;
    }

    for(int i = 0 ; i < count ; i++){
        s.push_back('x');
    }

    cout<<s<<endl;

}
