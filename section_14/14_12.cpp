#include <queue>
#include <iostream>

using namespace std;

int main () {
   string personName = "";
   int counter = 0;
   int youPosition;

   queue<string> peopleInQueue;

   getline(cin, personName);
   while (personName != "-1") {
      counter++;
      // TODO: Add personName to peopleInQueue
      //       determine position of "You" (youPosition)
      if(personName=="You"){
         youPosition = counter;
      }
      peopleInQueue.push(personName);
      getline(cin, personName);
   }

   cout << "Welcome to the ticketing service... " << endl;
   cout << "You are number " << youPosition << " in the queue." << endl;
   for(int i = youPosition-1 ; i>0 ; i--){
      personName  = peopleInQueue.front();
      cout<<personName<<" has purchased a ticket."<<endl;
      peopleInQueue.pop();
      cout<< "You are now number " <<i<<endl;
   }
   cout<<"You can now purchase your ticket!"<<endl;

   return 0;
}