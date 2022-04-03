#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//1 блок, задача про значения с шагом 7 до 100
	int shag = 7, size = 100;
	for(int i = 10; i < size; i+=shag){
		cout << i << " ";
	}

	system("pause >> null");
	return 0;
}
