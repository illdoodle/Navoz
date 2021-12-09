#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	// Объявление двух чисел
	int a, b;
	cout << "Введите a = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;
	
	// Больше <-> Меньше <-> Равно = Вариант ФУ!
	/* 
	cout << "Большее Число = ";
	if (a > b) {
		cout << "a = " << a << endl;
	} else if (a < b) {
		cout << "b = " << b << endl;
	} else { 
		cout << "Fatal Error! Pereustanavlivay Shindows." << endl;
	} 
	*/

	//  Вариант Класс = Не Злоупотреблять!
	cout << "Большее Или Равное Число = " << (a > b ? a : b) << endl;

	system("pause");
	return 0;
}
