#include <iostream>
#include <string>
using namespace std;

int main() {
	string login;
	string first;
	string last;
	int number;

	/* Type your code here */
	cin >> first;
	cin >> last;
	cin >> number;
	
	last = last.size()>5?last.substr(0,5):last.substr(0,last.size());
	cout << "Your login name: " << last<< first.substr(0,1)<<number%100<<endl;
	
	return 0;
}