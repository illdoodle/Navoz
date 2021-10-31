#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double sum = 0, n;

	cout << "Программа находит среднее арифметическое всех целых чисел от единицы до некоторого" << endl;

	cout << "Введите число = ";
	cin >> n;

	for (double i = 1; i <= n; i++){
		sum += i;
	}

	cout << "Среднее арифметическое = " << sum / n << endl;

	system("pause");
	return 0;
}
