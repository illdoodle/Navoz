#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int nach, kon;
	cout << "Вывод нечетных чисел от некоторого до некоторого" << endl;
	cout << "Введите некоторое первое число = ";
	cin >> nach;
	cout << "Введите некоторое второе число = ";
	cin >> kon;
	system("pause");
	
	for (nach; nach < kon; nach+=2) {
			cout << nach << "\t" << endl;
			Sleep(100);
	}

	system("pause");
	return 0;
}
