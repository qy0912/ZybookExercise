#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
string Parser(string l,int& t1, int& t2, int& t3){
   string temp;
   stringstream s(l);
   s >> temp;
   s >> temp;
   s >> t1;
   s >> t2;
   s >> t3;
   double avg = (t1+t2+t3)/3.0;
   string grade;
   if(avg<60){
      grade = "F";
   }else if(avg<70){
      grade = "D";
   }else if(avg<80){
      grade = "C";
   }else if(avg<90){
      grade = "B";
   }else{
      grade = "A";
   }
   l += "\t" + grade;
   return l;
}

int main() {
   ifstream inData;
   ofstream outData;
   string filename;
   string line;
   int i1,i2,i3;
   double s1 = 0;
   double s2 = 0;
   double s3 = 0;
   int count = 0;
   cin>>filename;
   inData.open(filename);
   outData.open("report.txt");
   
   while(getline(inData,line)){
      string new_l = Parser(line,i1,i2,i3);
      // cout<<new_l;
      s1 += i1;
      s2 += i2;
      s3 += i3;
      count ++;
      outData<<new_l<<endl;
   }
   
   outData<<endl<<fixed<<setprecision(2)<<"Averages: midterm1 "<<s1/count<<", midterm2 "<<s2/count<<", final "<<s3/count<<endl;
   inData.close();
   outData.close();

   return 0;
}
