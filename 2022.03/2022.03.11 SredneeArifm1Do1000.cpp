#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//1 блок, задача про среднее арифметическое от 0 до 1000 (как я понял эту задачу)
	for(double i = 0; i < 1000; i++){
		cout << (i + 1000) / 2 << endl;
	}

	system("pause >> null");
	return 0;
}
