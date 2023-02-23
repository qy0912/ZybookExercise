#ifndef STATEPAIR
#define STATEPAIR

template<typename T1, typename T2>
class StatePair {
public:
// TODO: Define constructors
   StatePair(){};
   StatePair(T1 userKey, T2 userValue){
      value1 = userKey;
      value2 = userValue;
   };
   
// TODO: Define mutators, and accessors for StatePair
   
   
	
// TODO: Define PrintInfo() method
   void PrintInfo(){
      std::cout<<value1<<": "<<value2<<std::endl;
   }
   void SetKey(T1 k){
      value1 = k;
   }
   void SetValue(T2 v){
      value2 = v;
   }
   
   T1 GetKey(){
      return value1;
   }
   T2 GetValue(){
      return value2;
   }
private:
   T1 value1;
   T2 value2;
};

#endif