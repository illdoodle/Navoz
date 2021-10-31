#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double sum = 0, n1, n2;

	cout << "Программа находит среднее арифметическое всех целых чисел от некоторого до некоторого" << endl;

	cout << "Введите первое число = ";
	cin >> n1;
	cout << "Введите первое число = ";
	cin >> n2;

	for (double i = n1; i <= n2; i++){
		sum += i;
	}

	cout << "Среднее арифметическое = " << sum / n2 << endl;

	system("pause");
	return 0;
}
