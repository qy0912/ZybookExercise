#include <iostream>
using namespace std;

/*
 1) Parse the String in the given format separated with ‘-’
 Sample input : computer
 Sample output : r-e-t-u-p-m-o-c
*/

int main(){
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; ++i){
        cout<<s.at(s.size()-1-i);
        if(i==s.size()-1){
            cout<<endl;
        }else{
            cout<<"-";
        }
    }
    return 0;
}