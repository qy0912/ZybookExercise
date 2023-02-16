#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

void Car::SetPurchasePrice(int p){
   purchasePrice = p;
}


// TODO: Implement GetPurchasePrice() function
int Car::GetPurchasePrice() const {
   return purchasePrice;
}


void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      

   currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}


void Car::PrintInfo(){
   cout<<"Car's information:\n";
   cout<<"  Model year: "<< Car::GetModelYear() <<endl;
   cout<<"  Purchase price: $"<< Car::GetPurchasePrice() <<endl;
   cout<<fixed << setprecision(0)<<"  Current value: $"<< currentValue <<endl;
}