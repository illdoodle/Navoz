#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int sum = 0, n1, n2;
	cout << "Программа выводит сумму всех натуральных чисел идущих от некоторого первого до некоторого второго" << endl;
	cout << "Введите первое число = ";
	cin >> n1;
	cout << "Введите второе число = ";
	cin >> n2;

	for (int i = n1; i <= n2; i++){
		sum += i;
	}

	cout << "Сумма = " << sum << endl;

	system("pause");
	return 0;
}
