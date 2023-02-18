#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
	// TODO: Declare private data members
public:

   void SetInstructorName(string s);
   void SetLocation(string s);
   void SetClassTime(string s);
	// TODO: Declare mutator functions -
	//      SetInstructorName(), SetLocation(), SetClassTime()

   string GetInstructorName();
   string GetClassTime();
   string GetLocation();
	// TODO: Declare accessor functions -
	//      GetInstructorName(), GetLocation(), GetClassTime()
private:
   string iname;
   string classtime;
   string l;


};

#endif