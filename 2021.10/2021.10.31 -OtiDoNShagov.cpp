#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double nach, kon, shag;
	cout << "Программа вычисляет каждое число от некоторого до некоторого с некоторым шагом" << endl;

	cout << "Введите первое число = ";
	cin >> nach;
	cout << "Введите второе число = ";
	cin >> kon;
	cout << "Введите шаг = ";
	cin >> shag; 
	system("pause");

	for (double i = nach; i <= kon && i >= nach || i >= kon && i <= nach; nach < kon ? i+=shag : i-=shag) {
		cout << i << endl;
		Sleep(100);
	}

	system("pause");
	return 0;
}
