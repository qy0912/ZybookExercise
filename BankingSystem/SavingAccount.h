#ifndef SAVINGACCOUNTH
#define SAVINGACCOUNTH

#include <string>
#include "BankAccount.h"
using namespace std;

class SavingAccount : public BankAccount {
	private:
		bool SalaryAccount;
        double MinimumBalance = 5000.0;
        

	public:
        SavingAccount(Customer* owner, double openingBalance) :BankAccount(owner, openingBalance){};
        SavingAccount(Customer* customer, double openingBalance ,long accountNumber, long bsb , string bankName,string openDate)
        :BankAccount(customer,openingBalance,accountNumber,bsb,bankName,openDate){};
		bool GetSalaryAccount();
        double GetMinimumBalance();
        void SetSalaryAccount(bool isSal);
        void SetMinimum(double min);
        double calcInterest(int years) override;
        bool withdraw(double amount);
        void deposit(double amount);
        void checkBalance();
        void AccountDisplay() override;
        string GenerateString() override;
};

#endif