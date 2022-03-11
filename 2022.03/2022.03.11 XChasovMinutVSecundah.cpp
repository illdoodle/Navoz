#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int s;
	cout << "Введите кол-во секунд = ";
	cin >> s;

	cout << "Полных минут = " << s / 60 << endl;
	cout << "Полных часов = " << s / 3600 << endl;

	system("pause >> null");
	return 0;
}
