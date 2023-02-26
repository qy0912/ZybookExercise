#ifndef COSTOMERH
#define COSTOMERH
#include <string>
#include "BankAccount.h"
using namespace std;

class Customer{
    public:
        Customer();
        Customer(string name, int age, int mobile, string passport,string dob);
        Customer(int id,string name, int age, int mobile, string passport,string dob);
        static int IdCount;
        const string GetName();
        const int GetId();
        const int GetAge();
        const int GetMobile();
        const string GetPassport();
        void SetAccount(BankAccount* account);
        BankAccount* GetAccount();
        string GenerateSavingStr();
        

    private:
        string CustomerName;
        int CustomerId;
        int Age;
        int MobileNumber;
        string PassportNumber;
        string DOB;
        BankAccount* Account;
};

#endif

