#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <string>
#include <ctime>
#include "Customer.h"
#include "BankAccount.h"
#include "SavingAccount.h"
#include "FixedDeposit.h"
#include "Idao.h"
#include "FileStorageDao.h"
using namespace std;

bool dateValidation( string date ){
    struct tm tm;
    if (strptime(date.c_str(), "%d/%m/%Y", &tm)){
         return true;
    }
    return false;
}

void handleModifyAccount(SavingAccount* Acc){
    cout<<"You May Modify Account created with follow Options"<<endl;
    cout<<"1.Withdraw"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Check Balance"<<endl;
    cout<<"4.Do Nothing"<<endl;
    string option;
    cin>>option;
    if(option == "1"){
        cout<<"Specify the Amount"<<endl;
        double amount;
        cin>>amount;
        if(Acc->withdraw(amount)){
            cout<<"You have successfully withdrawn $"<<amount<<endl;
        }else{
            cout<<"Failed, not enough balance"<<endl;
        }

    }
}

void HandleCreateCustomer(vector<Customer*>& CustomerList){
    string name;
    int age;
    int mobile;
    string passport;
    string dob;
    cout<< "To Create Customer Information, Please Specify The following Information:"<<endl;
    cout<<"Your Name: ";
    cin>>name;
    cout<<endl;

    
    cout<<"Your Age: ";

    cin>>age;
    cout<<endl; 
    if(!cin.good()){
        throw runtime_error("Invalid Age Input");
        return;
    }

    cout<<"Mobile Number: ";
    cin>>mobile;
    cout<<endl; 

    if(!cin.good()){
        throw runtime_error("Invalid Mobile Input");
        return;
    }

    cout<<"Passport Number: ";
    cin>>passport;
    cout<<endl; 

    cout<<"Date of Birth (DD/MM/YY): ";
    cin>>dob;
    bool valid = dateValidation(dob);
    while(!valid){
        cout << "Invalid date of birth, try again!"<<endl;
        cout<<"Your Date of Birth (DD/MM/YY): ";
        cin>>dob;
        valid = dateValidation(dob);
    }
    cout<<endl; 

    Customer* newCustomer = new Customer(name,age,mobile,passport,dob);
    CustomerList.push_back(newCustomer);

    cout<<"Customer "<<newCustomer->GetId()<< " Has Been Created!"<<endl<<endl;
}

bool CheckCustomerHasAccount(vector<BankAccount*>& AccountList,int CustomerID){
    bool exist=false;
    for(int i = 0 ; i< AccountList.size() ; i ++){
        if(AccountList.at(i)->GetOwner()->GetId() == CustomerID ){
            exist = true;
            break;
        }
    }
    return exist;
}

int findCustomer(vector<Customer*>& CustomerList,int id){
    int index = -1;
    for(int i = 0 ; i< CustomerList.size() ; i ++){
        if(CustomerList.at(i)->GetId() == id ){
            index = i;
            break;
        }
    }
    return index;
}

BankAccount* findCustomerWithID(vector<BankAccount*>& AccountList,int id){
    cout<<AccountList.size()<<endl;
    for(int i = 0; i<AccountList.size() ; i++){
        cout<<AccountList.at(i)->GetOwner()->GetId()<<endl;
        if(AccountList.at(i)->GetOwner()->GetId() == id){
            cout<<"found it!"<<endl;
            return AccountList.at(i);
        }
    }
    return nullptr;
}



void handleAssignAccount(vector<Customer*>& CustomerList,vector<BankAccount*>& AccountList){
    cout<<"Please Provide Your customer Id: ";
    int CustomerId;
    cin>>CustomerId;
    int index = findCustomer(CustomerList,CustomerId);
    if(index == -1){
        cout<<"Customer Does Not Exist" <<endl<<endl;
        return;
    }
    if (CheckCustomerHasAccount(AccountList,CustomerId)){
        cout<<"This Customer Already Have a Bank Account!"<<endl<<endl;
    }else{
        cout<<"Specify Type of the Account, 0 for Saving Account, 1 for Fixed deposite"<<endl;
        string accType;
        cin>> accType;
        if(accType == "0"){
            cout<<"Creating a Saving Account"<<endl;
            cout<<"Please Specify If this is a Salary Account(yes/no)"<<endl;
            string isSal;
            double open;
            cin>>isSal;
            if(isSal == "yes"){
                cout<<"Specify Opening balance"<<endl;
                cin>>open;
                SavingAccount* newAccount = new SavingAccount(CustomerList.at(index),open);
                newAccount->SetSalaryAccount(true);
                AccountList.push_back(newAccount);
                CustomerList.at(index)->SetAccount(newAccount);
                cout<< "Saving Account " << newAccount->GetAccountNumber()<<" Has Been Assigned to Customer "<<CustomerId<<endl<<endl;
            }else{
                cout<<"Specify Opening balance"<<endl;
                cin>>open;
                if(open<5000){
                    throw runtime_error("Not enough balance to open Saving account.");
                }else{
                    SavingAccount* newAccount = new SavingAccount(CustomerList.at(index),open);
                    newAccount->SetSalaryAccount(false);
                    AccountList.push_back(newAccount);
                    CustomerList.at(index)->SetAccount(newAccount);
                    cout<< "Saving Account " << newAccount->GetAccountNumber()<<" Has Been Assigned to Customer "<<CustomerId<<endl<<endl;    
                   
                   handleModifyAccount(newAccount);           
                }
            }
        }else if(accType == "1"){
            double deposite;
            cout<<"Specify Deposite Amount"<<endl;
            cin >> deposite;
            if(deposite<1000){
                throw runtime_error("Not enough balance to open fixed deposite account.");
            }

            int tre;
            cout<<"Specify Tenure years"<<endl;
            cin >> tre;
            if(tre<1 || tre>7){
                throw runtime_error("Invalid tenure years");
            }
            FixedDeposit* newAccount = new FixedDeposit(CustomerList.at(index),deposite);
            newAccount->SetDepositAmount(deposite);
            newAccount->SetTenure(tre);
            AccountList.push_back(newAccount);
            CustomerList.at(index)->SetAccount(newAccount);
            cout<< "Fixed Deposit Account " << newAccount->GetAccountNumber()<<" Has Been Assigned to Customer "<<CustomerId<<endl<<endl;
        }

    }
}

void handleDisplayAccount(vector<Customer*>& CustomerList,vector<BankAccount*>& AccountList){
    cout<<"Specify an Customer ID"<<endl;
    int id;
    cin>>id;
    BankAccount* acc = findCustomerWithID(AccountList,id);
    if(acc==nullptr){
        cout<<"ID could not be found"<<endl;
    }else{
        acc->AccountDisplay();
    }
}



void handleSortCustomer(vector<Customer*>& CustomerList,vector<BankAccount*>& AccountList){
    cout<<"Specify How to Sort(1:by Balance,2:by Name):"<<endl;
    string whichSort;
    cin>> whichSort;
    if(whichSort=="1"){
        for(int i = 0 ; i < CustomerList.size() ; i++){
            Customer*  max = CustomerList.at(i);
            int index = i;
            for(int j = i+1; j<CustomerList.size() ; j++){
                if( (max->GetAccount()!=nullptr) && (max->GetAccount()->GetBalance() > CustomerList.at(j)->GetAccount()->GetBalance())){
                    max = CustomerList.at(j);
                    index = j;
                }
            }
            Customer* temp = CustomerList.at(i);
            CustomerList.at(i) = max;
            CustomerList.at(index) = temp;
        }
    }
    else if(whichSort == "2"){
        for(int i = 0 ; i < CustomerList.size() ; i++){
            Customer*  max = CustomerList.at(i);
            int index = i;
            for(int j = i+1; j<CustomerList.size() ; j++){
                if(max->GetName() > CustomerList.at(j)->GetName()){
                    max = CustomerList.at(j);
                    index = j;
                }
            }
            Customer* temp = CustomerList.at(i);
            CustomerList.at(i) = max;
            CustomerList.at(index) = temp;
        }
    }
    cout<<"Customers Are Sorted."<<endl;
}

void handlePersist(vector<Customer*>& CustomerList){
    FileDao d(CustomerList);
    d.InfoToTxt();
    cout<<"All information has been saved to save.txt"<<endl;
}

void handleShowAll(vector<Customer*>& CustomerList){
    FileDao d(CustomerList);
    vector<Customer*> v = d.readAlldata();
    for(int i = 0; i< v.size() ; i++){
        v.at(i)->PrintInfo();
    }
}

void handleSearchCustomer(vector<Customer*>& CustomerList){
    cout<<"Input the Customer Name: "<<endl;
    string name;
    cin>>name;
    int count = 0;
    for(int i = 0 ; i < CustomerList.size() ; i++){
        if(CustomerList.at(i)->GetName() == name ){
            CustomerList.at(i)->PrintInfo();
            count++;
        }
    }
    if(count == 0){
        cout<<"No Customer with name of "<<name<<endl;
    }


}

int main(){
    vector<Customer*> CustomerList;
    vector<BankAccount*> AccountList;
    while(1){
        cin.clear();
        cout<<"Please select one of the following options by input the option number:"<<endl;
        cout<<"1. Create New Customer Data"<<endl;
        cout<<"2. Assign a Bank Account to a Customer"<<endl;
        cout<<"3. Display balance or interest earned of a Customer"<<endl;
        cout<<"4. Sort Customer Data"<<endl;
        cout<<"5. Persist Customer Data"<<endl;
        cout<<"6. Show All Customers"<<endl;
        cout<<"7. Search Customers by Name"<<endl;
        cout<<"8. Exit"<<endl<<endl;
        

        string userChoice;
        cin>>userChoice;
        // getline(cin,userChoice);

        if(userChoice == "1"){
            try{
                HandleCreateCustomer(CustomerList);
            }catch(runtime_error& e){
                cout<<e.what()<<endl;
                cout<<endl;
            }
        }else if(userChoice == "2"){
            try{
            handleAssignAccount(CustomerList,AccountList);
            }catch(runtime_error& e){
                cout<<e.what()<<endl;
                continue;
            }
        }else if(userChoice == "3"){
            handleDisplayAccount(CustomerList,AccountList);
        }else if(userChoice == "4"){
            handleSortCustomer(CustomerList,AccountList);
        }else if(userChoice == "5"){
            handlePersist(CustomerList);
        }else if(userChoice == "6"){
            handleShowAll(CustomerList);
        }else if(userChoice == "7"){
            handleSearchCustomer(CustomerList);
        }
        else if(userChoice=="8"){
            cout<<"Thank You For Using the Banking System, Bye!"<<endl;
            break;
        }else{
            cout<<"Input Option Not Avaliable, Please Try Again"<<endl;
            cout<<endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

}
