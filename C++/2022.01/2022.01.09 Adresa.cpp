#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int n = 10;
	int *p;
	p = &n;
	cout << "����� = " << p << endl;
	cout << "����� ��� ������� = " << *p << endl;

	system("pause >> null");
	return 0;
}
