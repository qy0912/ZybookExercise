#ifndef IDAOH
#define IDAOH

#include "Customer.h"
#include "SavingAccount.h"
#include "FixedDeposit.h"
#include <vector>



using namespace std;

class Idao{
    public:
        vector<Customer*> CustomerInfo;
        Idao(vector<Customer*> Info){CustomerInfo = Info;};
        virtual void InfoToTxt() = 0;
        virtual vector<Customer*> readAlldata() = 0 ;
};

#endif 