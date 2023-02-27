#include <iostream>
#include <string>
#include "FixedDeposit.h"     

using namespace std;
double FixedDeposit::calcInterest(int years){
    return DepositAmount*years*0.08;
}

int FixedDeposit::GetTenure(){
    return Tenure;
}
double FixedDeposit::GetDepositAmount(){
    return DepositAmount;
}

double FixedDeposit::FindInterestEarned(){
    InterestEarned = Tenure*DepositAmount*0.08;
    return Tenure*DepositAmount*0.08;
}


void FixedDeposit::SetDepositAmount(double amount){
    DepositAmount = amount ;
}

void FixedDeposit::SetTenure(int years){
    Tenure = years;
}

void FixedDeposit:: AccountDisplay(){
    cout<< "Balance: $" << BankAccount::GetBalance()<<endl;
    cout<< "Interest: $" << FindInterestEarned()<<endl;
}

string FixedDeposit::GenerateString(){
    string ret = "";
    ret += "Fixed";
    ret += " ";
    ret += BankAccount::GetBankName() + " ";
    ret += to_string(BankAccount::GetAccountNumber()) + " ";
    ret += to_string(BankAccount::GetBSB()) + " ";
    ret += to_string(BankAccount::GetBalance()) + " ";
    ret += BankAccount::GetOpeningDate()+" ";
    ret += to_string(DepositAmount) + " ";
    ret += to_string(Tenure) + " ";
    ret += to_string(InterestEarned);
    return ret;
}

