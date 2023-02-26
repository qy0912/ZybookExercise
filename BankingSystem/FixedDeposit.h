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