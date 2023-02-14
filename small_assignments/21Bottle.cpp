#include<iostream>
using namespace std;
/*
How many you would like to pick up?
2
Computer has picked 3
The bottles remaining are: 11
How many you would like to pick up? 3
Computer has picked 2
The bottles remaining are: 6
How many you would like to pick up? 4
Computer has picked 1
*/
int main(){
    cout<< "There are 21 beer bottles..." <<endl;
    cout<< "There are 2 players - Computer and you." <<endl;
    cout<< "At a time, each one can pick up any no. of bottles between 1 and 4 (inclusive)" <<endl;
    cout<< "Will you like to play first?" <<endl;

    string s;
    while(cin>>s){
        if(s=="Yes"){
            break;
        }else{
            cout<<"Will you like to play first?(You must say Yes ^ ^)"<<endl;
        }
    }

    int n_bottle = 21;
    int user_input;
    while(n_bottle>1){
        cout << "How many you would like to pick up?" << endl;
        cin >> user_input;
        cout << "Computer has picked "<< 5-user_input << endl;
        n_bottle -= 5;
        cout << "The bottles remaining are: " << n_bottle << endl;
    }

    cout << "You will have to pick up the last..you are loser" << endl;
}