#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	char str[] = "tilitili222";
	int size = sizeof(str) / sizeof(char);

	cout << "Массив: " << str;
	cout << endl << "Первые три = ";
	for(int i = 0; i < 3; i++){
		cout << str[i];
	}
	cout << endl << "Последние три = ";
	for(int i = size - 4; i < size; i++){
		cout << str[i];
	}

	system("pause >> null");
	return 0;
}
