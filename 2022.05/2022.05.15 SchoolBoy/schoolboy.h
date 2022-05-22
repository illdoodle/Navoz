#ifndef SCHOOLBOY_H
#define SCHOOLBOY_H
#include "human.h"
#endif

enum subjectList
{
	sLmath,
	sLrus,
	sLeng,
};

struct SubjectMark
{
	int mark;
	subjectList subject;
};

class SchoolBoy:public Human
{
	private:
		SubjectMark *marks;
	public:
		void addMark(subjectList, int);
		void listMarks();
		double getMarksAvg();
		int getMarkSubject(subjectList);
		SchoolBoy();
		SchoolBoy(char *_name);
		~SchoolBoy();
};

