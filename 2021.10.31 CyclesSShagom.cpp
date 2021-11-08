#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double nach, kon;
	cout << "Вывод чисел от некоторого до некоторого с шагом 0.4" << endl << "Не вводите больше числа!" << endl;

	cout << "Введите первое число = ";
	cin >> nach;
	cout << "Введите второе число = ";
	cin >> kon;

	cout << "Вывод чисел от " << nach << " до " << kon << " с шагом 0.4" << endl;
	system("pause");

	for (double i = nach; i < kon; i+=0.4){
		cout << i << "\t" << endl;
		Sleep(100);
	}

	system("pause");
	return 0;
}
