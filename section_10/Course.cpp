#include "Course.h"

	// TODO: Define mutator functions - 
	//       SetCourseNumber(), SetCourseTitle()
void Course::SetCourseNumber(string s){
   number = s;
}
void Course::SetCourseTitle(string s){
   title = s;
}

string Course::GetCourseNumber(){
   return number;
}
	// TODO: Define accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
string Course::GetCourseTitle(){
   return title;
}

void Course::PrintInfo(){
   cout<<"Course Information:"<<endl;
   cout<<"   Course Number: " << number << endl;
   cout<<"   Course Title: " << title << endl;
}
	// TODO: Define PrintInfo()