#include "schoolclass.h"

void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");

	SchoolBoy boy;	
	boy.addMark(sLrus, 4);
	boy.addMark(sLmath, 5);
	boy.addMark(sLeng, 4);
	boy.addMark(sLrus, 5);
	boy.listMarks();
	cout << endl;
	cout << boy.getMarksAvg() << endl;
	cout << boy.getMarksAvgSubject(sLrus) << endl;
	SchoolClass firclass;
	firclass.add(&boy);
	firclass.SBoys[0]->getMarksAvg();
	firclass.SBoys[0]->name;

	system("pause >> null");
}
