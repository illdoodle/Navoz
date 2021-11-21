#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double n;
	cout << "Как выглядит одно и то же число в разных типах данных" << endl;
	cout << "Введите любое число (можно десятичное) = ";
	cin >> n;
	cout << "Ваше число в int = " << (int)n << endl;
	cout << "Ваше число в double = " << (double)n << endl;
	cout << "Ваше число в float = " << (float)n << endl;
	cout << "Ваше число в char = " << (char)n << endl;

	system("pause");
	return 0;
}
