#include "OfferedCourse.h"

// TODO: Define mutator functions -
//      SetInstructorName(), SetLocation(), SetClassTime()
void OfferedCourse::SetInstructorName(string s){
   iname = s;
}
void OfferedCourse::SetLocation(string s){
   l = s;
}
void OfferedCourse::SetClassTime(string s){
   classtime = s;
}

// TODO: Define accessor functions -
//      GetInstructorName(), GetLocation(), GetClassTime()
string OfferedCourse::GetInstructorName(){
   return iname;
}
string OfferedCourse::GetClassTime(){
   return classtime;
}
string OfferedCourse::GetLocation(){
   return l;
}
