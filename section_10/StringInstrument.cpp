#include "StringInstrument.h"
      int numStrings;
      int numFrets;
      bool isBowed;
// TODO: Define mutator functions - 
//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
void StringInstrument::SetNumOfStrings(int s){
   numStrings = s;
}
void StringInstrument::SetNumOfFrets(int f){
   numFrets = f;
}
void StringInstrument::SetIsBowed(bool b){
   isBowed = b;
}

// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()
int StringInstrument::GetNumOfStrings(){
   return numStrings;
}
int StringInstrument::GetNumOfFrets(){
   return numFrets;
}
bool StringInstrument::GetIsBowed(){
   return isBowed;
}
