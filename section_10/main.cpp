#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Define a PrintVector function that prints an vector of plant (or flower) object pointers

int main() {
   // TODO: Declare a vector called myGarden that can hold object of type plant pointer
   vector<Plant*> myGarden;
   string plantName;
   int plantCost;
   string flowerName;
   int flowerCost;
   string isAnnual;
   string colorOfFlowers;
   
   string input;

   cin >> input;
   
   while(input != "-1") {
      if (input == "plant"){
         Plant* p = new Plant;
         cin>>plantName;
         p->SetPlantName(plantName);
         cin>>plantCost;
         p->SetPlantCost(plantCost);
         myGarden.push_back(p);
      }
      else if (input == "flower"){

         Flower* f = new Flower;
         cin>>flowerName;
         f->SetPlantName(flowerName);

         
         cin>>flowerCost;
         f->SetPlantCost(flowerCost);

         
         cin>>isAnnual;
         if(isAnnual=="false"){
            f->SetPlantType(false);
         }else{
            f->SetPlantType(true);
         }
         cin >> colorOfFlowers;
         f->SetColorOfFlowers(colorOfFlowers);
         
         myGarden.push_back(f);
      }
      cin >> input;
   }

   // TODO: Call the method PrintVector to print myGarden
   for(int i = 0 ; i < myGarden.size() ; i++){
      cout<<"Plant "<< i+1 << " Information:"<<endl;
      myGarden.at(i)->PrintInfo();
      cout<<endl;
   }

   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }
   
   return 0;
}