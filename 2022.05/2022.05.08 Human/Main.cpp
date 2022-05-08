#include "human.h"

void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");

	Human mark;
	mark.setName("Mark");
	cout << mark.name << endl;
	Human h2("Oleg");
	cout << h2.name << endl;
	system("pause >> null");
}
