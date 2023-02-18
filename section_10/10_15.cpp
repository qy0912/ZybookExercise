#include <iostream>
#include<string>
#include "Cat.h"

using namespace std;

int main() {

	string petName, catName, catBreed;
	int petAge, catAge;

	Pet myPet;
	Cat myCat;

	getline(cin, petName);
	cin >> petAge;
	cin.ignore();
	getline(cin, catName);
	cin >> catAge;
	cin.ignore();
	getline(cin, catBreed);

	// TODO: Create generic pet (using petName, petAge) and then call PrintInfo       

   myPet.SetName(petName);
   myPet.SetAge(petAge);
   myPet.PrintInfo();

	// TODO: Create cat pet (using catName, catAge, catBreed) and then call PrintInfo
   myCat.SetName(catName);
   myCat.SetAge(catAge);
   myCat.SetBreed(catBreed);
   myCat.PrintInfo();
   cout<< "   Breed: "<<myCat.GetBreed()<<endl;

	// TODO: Use GetBreed(), to output the breed of the cat


}
