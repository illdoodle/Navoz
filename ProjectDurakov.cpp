#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	

	system("pause >> null");
}
