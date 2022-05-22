#include "human.h"
#include "schoolboy.h"

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

	system("pause >> null");
}
