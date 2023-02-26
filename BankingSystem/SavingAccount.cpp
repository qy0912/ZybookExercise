#include "SavingAccount.h"
#include <iostream>
#include <string>
using namespace std;
void SavingAccount::SetMinimum(double min){
    MinimumBalance = min;
}

void SavingAccount::SetSalaryAccount(bool isSal){
    SalaryAccount = isSal;
}

bool SavingAccount::GetSalaryAccount(){
    return SalaryAccount;
}

double SavingAccount::GetMinimumBalance(){
    return MinimumBalance;
}

double SavingAccount::calcInterest(int years){
    return BankAccount::GetBalance()* years *0.04;
}

bool SavingAccount::withdraw(double amount){
    if (SalaryAccount){
        if (BankAccount::GetBalance() - amount > 0){
            BankAccount::SetBalance(BankAccount::GetBalance() - amount);
            return true;
        }else{
            return false;
        }
    }else{
        if (BankAccount::GetBalance() - amount > MinimumBalance){
            BankAccount::SetBalance(BankAccount::GetBalance() - amount);
            return true;
        }else{
            return false;
        }
    }
}

void SavingAccount::deposit(double amount){
    BankAccount::SetBalance(BankAccount::GetBalance() + amount);
}

void SavingAccount::checkBalance(){
    cout<<"Balance: "<<BankAccount::GetBalance()<<endl;
}

void SavingAccount:: AccountDisplay(){
    cout<< "Balance: $" << BankAccount::GetBalance()<<endl;
    cout<<"Specify how many years for interest: "<<endl;
    int years;
    cin>>years;
    cout<< "Interest: $" << calcInterest(years)<<endl;
}

string SavingAccount::GenerateString(){
    string ret = "";
    ret += "Saving";
    ret += " ";
    ret += BankAccount::GetBankName() + " ";
    ret += to_string(BankAccount::GetAccountNumber()) + " ";
    ret += to_string(BankAccount::GetBSB()) + " ";
    ret += to_string(BankAccount::GetBalance()) + " ";
    ret += BankAccount::GetOpeningDate()+" ";
    ret += SalaryAccount?"true ":"false ";
    ret += to_string(MinimumBalance);
    return ret;
}