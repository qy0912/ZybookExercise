#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument {
   public:
      void SetNumOfStrings(int s);
      void SetNumOfFrets(int f);
      void SetIsBowed(bool isbowed);
      int GetNumOfStrings();
      int GetNumOfFrets();
      bool GetIsBowed();
   private:
      int numStrings;
      int numFrets;
      bool isBowed;
	// TODO: Declare private data members: numStrings, numFrets, isBowed


	// TODO: Declare mutator functions - 
	//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()


	// TODO: Declare accessor functions -
	//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()


};

#endif
