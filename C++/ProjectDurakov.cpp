#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	

	system("pause >> null");
	return 0;
}
