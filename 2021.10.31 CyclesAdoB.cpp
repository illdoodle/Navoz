#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int a, b;
	cout << "Вывод всех чисел от некоторого первого числа до второго" << endl << "Не вводите большие числа!" << endl;

	cout << "Введите первое число = ";
	cin >> a;
	cout << "Введите второе число = ";
	cin >> b;
	

	for (int i = (a < b ? a : b); i <= (a < b ? b : a); i++) {
		cout << i << "\t" << endl;
		Sleep(50);
	}

	system("pause");
	return 0;
}
