#include <iostream>
#include <sstream>
#include "VendingMachine.h"
using namespace std;

int main() {
	/* Type your code here */
	string s;
	getline(cin,s);
	stringstream X(s);
	
	string word;
	getline(X, word, ' ');
	int pur = stoi(word);
	getline(X, word, ' ');
	int res = stoi(word);

	VendingMachine v = VendingMachine();
	v.Purchase(pur);
	v.Restock(res);
	
	v.Report();
}