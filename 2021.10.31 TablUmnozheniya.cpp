#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "Программа показывает таблицу умножения указанного числа до 10" << endl;

	int n;
	cout << "Введите число = ";
	cin >> n;

	for (int i = 1; i <= 10; i++) {
		cout << n << " * " << (i < 10 ? " " : "") << i << " = " << (i * n < 10 ? " " : "") << i * n << endl;
	}

	system("pause");
	return 0;
}
