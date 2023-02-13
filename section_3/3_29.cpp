#include <iostream>
#include <iomanip>
using namespace std;

double fixed_max(double d){
   if(d>100){
      return 100.0;
      }else{
      return d;}
   };
   
double average(string type, double hw, double qz, double midter,double final){
   if(type == "UG"){
      return 0.2*hw+0.2*qz+0.3*midter+0.3*final;
   }else if(type == "G"){
      return 0.15*hw+0.05*qz+0.35*midter+0.45*final;
   }else{
      return 0.05*hw+0.05*qz+0.4*midter+0.5*final;
   }
}

string score_to_grade(double score){
   if(score >= 90){
      return "A";
   }else if(score >= 80){
      return "B";
   }else if(score >=70){
      return "C";
   }else if(score>=60){
      return "D";
   }else{
      return "F";   
   }
}

int main() {
   double HOMEWORK_MAX = 800.0;
   double QUIZZES_MAX = 400.0;
   double MIDTERM_MAX = 150.0;
   double FINAL_MAX = 200.0;

   /* Type your code here. */
   string type;
   double hw;
   double qz;
   double midterm;
   double final;
   
   cin >> type;
   cin >> hw;
   cin >> qz;
   cin >> midterm;
   cin >> final;
   
   
   
   if(type!="DL" && type!="G" && type!="UG"){
      cout<<"Error: student status must be UG, G or DL"<<endl;
      return 0;
   }
   
   double avg = average(type,fixed_max(hw/HOMEWORK_MAX*100),fixed_max(qz/QUIZZES_MAX*100),fixed_max(midterm/MIDTERM_MAX*100),fixed_max(final/FINAL_MAX*100));
   
   cout << "Homework: " <<fixed << setprecision(1) << fixed_max(hw/HOMEWORK_MAX*100) << "%" << endl;
   cout << "Quizzes: " << fixed_max(qz/QUIZZES_MAX*100) << "%" << endl;
   cout << "Midterm: " << fixed_max(midterm/MIDTERM_MAX*100) << "%" << endl;
   cout << "Final Exam: " << fixed_max(final/FINAL_MAX*100) << "%" << endl;
   cout << type << " average: " << avg << "%" <<endl;
   cout << "Course grade: " << score_to_grade(avg)<<endl;
   return 0;
}
