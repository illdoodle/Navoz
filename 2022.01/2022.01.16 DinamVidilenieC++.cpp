#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int *p, size;
	cout << "������ = ";
	cin >> size;
	p = new int[size];
	cout << "����� = " << p << ", �������� = " << *p << endl;
	delete[]p;

	system("pause >> null");
	return 0;
}
