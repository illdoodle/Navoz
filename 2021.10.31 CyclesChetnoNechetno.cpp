#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int nach, kon;
	cout << "Вывод нечетных чисел" << endl;
	cout << "Введите первое число = ";
	cin >> nach;
	cout << "Введите второе число = ";
	cin >> kon;

	cout << "Вывод нечетных чисел от " << nach << " до " << kon << endl;
	Sleep(1000);
	
	for (nach; nach < kon; nach+=2) {
			cout << nach << "\t" << endl;
			Sleep(100);
	}

	system("pause");
	return 0;
}
