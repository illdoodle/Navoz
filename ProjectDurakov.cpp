#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	

	system("pause >> null");
	return 0;
}
