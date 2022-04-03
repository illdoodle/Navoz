#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//1 блок, задача про бревна
	int b, k;
	cout << "Длина бревна = ";
	cin >> b;
	cout << "Длина куска = ";
	cin >> k;
	cout << "Максимум целых кусков = " << b / k << endl;

	system("pause >> null");
	return 0;
}
