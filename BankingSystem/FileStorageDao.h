
#ifndef FILEDAOH
#define FILEDAOH

#include "Idao.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class FileDao : public Idao{
    public:
        FileDao(vector<Customer*> fullInfo):Idao(fullInfo){};
        void InfoToTxt(){
            ofstream f;
            f.open("save.txt");
            for(int i = 0 ; i< CustomerInfo.size() ;  i++){
                f << CustomerInfo.at(i)->GenerateSavingStr() <<endl;
            }
            f.close();
        }

        /*
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
*/
        vector<Customer*> readAlldata(){
            ifstream f;
            f.open("save.txt");
            vector<Customer*> ret;
            string line;
            while(getline(f,line)){
                stringstream s(line);
                string name;
                s>>name;
                int id;
                s>> id;
                int age;
                s>> age;
                int mobile;
                s>> mobile;
                string passport;
                s>> passport;
                string dob;
                s>> dob;
                Customer* newCust = new Customer(id, name, age, mobile, passport,dob);
                string acctype;
                s>> acctype;
                if(acctype=="N/A"){
                    newCust->SetAccount(nullptr);
                }else if(acctype=="Saving"){
                    
                }else if(acctype=="Fixed"){

                }

                ret.push_back(newCust);
            }
            f.close();
            return ret;
        };
};

#endif 