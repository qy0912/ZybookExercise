#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;

int Customer::IdCount = 100;

Customer::Customer(){
    CustomerName = "N/A";
    CustomerId = -1;
    Age = -1;
    MobileNumber = -1;
    PassportNumber = "N/A";
    Account = nullptr;
}

Customer::Customer(string name, int age, int mobile, string passport,string dob){
    CustomerName = name;
    CustomerId = IdCount;
    IdCount ++;
    Age = age;
    MobileNumber = mobile;
    PassportNumber = passport;
    DOB = dob;
}

Customer::Customer(int id, string name, int age, int mobile, string passport,string dob){
    CustomerName = name;
    CustomerId = id;
    Age = age;
    MobileNumber = mobile;
    PassportNumber = passport;
    DOB = dob;
}

const string Customer::GetName(){
    return CustomerName;
}

const int Customer::GetId(){
    return CustomerId;
}

const int Customer::GetAge(){
    return Age;
}

const int Customer::GetMobile(){
    return MobileNumber;
}

const string Customer::GetPassport(){
    return PassportNumber;
}

void Customer::SetAccount(BankAccount* account){
    Account = account;
}

BankAccount* Customer::GetAccount(){
    return Account;
}

string Customer::GenerateSavingStr(){
    string ret = "";
    ret += CustomerName + " ";
    ret += to_string(CustomerId) + " ";
    ret += to_string(Age) + " ";
    ret += to_string(MobileNumber)+ " ";
    ret += PassportNumber + " ";
    ret += DOB + " ";
    if(Account!=nullptr){
        ret += Account->GenerateString();
    }else{
        ret+="N/A";
    }
    return ret;
}