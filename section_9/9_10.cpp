#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int DateParser(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
	

	string day;
	string month;
	string year;
	string inputline;
	
	getline(cin,inputline);
	while(inputline!="-1"){

	   stringstream s(inputline);
	   s >> month;
	   s >> day; 
	   s >> year;

	   if(  !s.eof() ){
	      getline(cin,inputline);
	     continue;
	   }
	   if(day.size()<1 || day.at(day.size()-1)!=','){
	      getline(cin,inputline);
	      continue;
	   }
	   if(DateParser(month)==0){
	      getline(cin,inputline);
	      continue;   
	   }
	   cout<<DateParser(month)<<"-"<<day.substr(0,day.size()-1)<<"-"<<year<<endl;
	   getline(cin,inputline);
	}
	

}
