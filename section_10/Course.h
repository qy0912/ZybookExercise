#ifndef COURSEH
#define COURSEH

#include <iostream>
#include <string>

using namespace std;

class Course {
	// TODO: Declare private data members
	public:
	   void SetCourseNumber(string s);
	   void SetCourseTitle(string s);
	   string GetCourseNumber();
	   string GetCourseTitle();
	   void PrintInfo();
	private:
	   string title;
	   string number;
};

#endif
