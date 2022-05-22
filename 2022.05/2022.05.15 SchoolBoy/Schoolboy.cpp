#include "schoolboy.h"

SchoolBoy::SchoolBoy()
{
	cout << "schoolboy created" << endl;
	marks = NULL;
	name[0] = 0;
}

SchoolBoy::SchoolBoy(char *_name)
{
	cout << "schoolboy created" << endl;
	marks = NULL;
	strcpy(name, _name);
}

SchoolBoy::~SchoolBoy()
{
	cout << "schoolboy destructed" << endl;
	if(marks){
		free(marks);
	}
}

void SchoolBoy::addMark(subjectList subject, int mark){

	SubjectMark subjectMark;
	subjectMark.subject = subject;
	subjectMark.mark = mark;
	int count = 0;
	if(marks){
		count = _msize(marks) / sizeof(SubjectMark);
		marks = (SubjectMark*)realloc(marks, (count + 1) * sizeof(SubjectMark));
	}else{
		marks = (SubjectMark*)malloc(sizeof(SubjectMark));
	}
	marks[count] = subjectMark;
}

void SchoolBoy::listMarks()
{	
	if(!marks){
		return;	
	}
	int count = _msize(marks) / sizeof(SubjectMark);
	for(int i = 0; i < count; i++){
		cout << marks[i].mark << " ";
	}
}