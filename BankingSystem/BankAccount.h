#ifndef BANKACCOUNTH
#define BANKACCOUNTH
#include <string>

using namespace std;

class Customer;
class BankAccount{
    public:
        BankAccount(Customer* owner, double openingBalance);
        static long AccountCount;
        const string GetBankName();
        const long GetAccountNumber();
        const long GetBSB();
        const double GetBalance();
        const string GetOpeningDate();
        Customer* GetOwner();
        virtual double calcInterest(int years) =0;
        virtual void AccountDisplay() = 0;
        void SetBalance(double amount);
        virtual string GenerateString() = 0;
        
    private:
        string BankName;
        long AccountNumber;
        long BSBCode;
        double Balance;
        string OpeningDate;
        Customer* Owner;
};

#endif