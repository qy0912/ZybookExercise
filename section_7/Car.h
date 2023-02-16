#ifndef CARH
#define CARH

class Car {
   private:
      int modelYear; 
      int purchasePrice;
      double currentValue;
   
   public:
      void SetModelYear(int userYear);

      int GetModelYear() const;
   
      void SetPurchasePrice(int p);
   
      int GetPurchasePrice() const;
   
      void CalcCurrentValue(int currentYear);
      
      void PrintInfo();
     // TODO: Declare PrintInfo() method to output modelYear, purchasePrice, and 
     // currentValue
   
};

#endif