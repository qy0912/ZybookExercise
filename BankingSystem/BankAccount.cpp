#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

long BankAccount::AccountCount = 100000000;

BankAccount::BankAccount(Customer* customer, double openingBalance){
    Owner = customer;
    AccountNumber = AccountCount;
    AccountCount++;
    BankName = "CommBank";
    BSBCode = 666777;
    Balance = openingBalance;
    OpeningDate = "01/01/2023";
}
BankAccount::BankAccount(Customer* customer, double openingBalance ,long accountNumber, long bsb , string bankName,string openDate){
    Owner = customer;
    AccountNumber = accountNumber;
    BankName = bankName;
    BSBCode = bsb;
    Balance = openingBalance;
    OpeningDate = openDate;
}

const string BankAccount::GetBankName(){
    return BankName;
}

const long BankAccount::GetAccountNumber(){
    return AccountNumber;
}
        
const long BankAccount::GetBSB(){
    return BSBCode;
}
        
const double BankAccount::GetBalance(){
    return Balance;
}
        
const string BankAccount::GetOpeningDate(){
    return OpeningDate;
}

Customer* BankAccount::GetOwner(){
    return Owner;
}

void BankAccount::SetBalance(double amount){
    Balance = amount;
}