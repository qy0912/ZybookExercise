#ifndef FIXEDDEPOSITH
#define FIXEDDEPOSITH

#include <string>
#include "BankAccount.h"


using namespace std;

class FixedDeposit : public BankAccount {
	private:
		double  DepositAmount;
                int Tenure;
                double InterestEarned;
        

	public:
                FixedDeposit(Customer* owner, double openingBalance) :BankAccount(owner, openingBalance){};
                FixedDeposit(Customer* customer, double openingBalance ,long accountNumber, long bsb , string bankName,string openDate)
        :BankAccount(customer,openingBalance,accountNumber,bsb,bankName,openDate){};
                double calcInterest(int years) override;
                int GetTenure();
                double GetDepositAmount();
                double FindInterestEarned();
                void SetDepositAmount(double amount);
                void SetTenure(int years);
                void AccountDisplay() override;
                string GenerateString() override;
};

#endif