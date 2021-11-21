#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "Большее из двух введеных чисел" << endl;
	int a, b;
	cout << "Введите первое число = ";
	cin >> a;
	cout << "Введите второе число = ";
	cin >> b;
	cout << "Большее или равное число = " << (a > b ? a : b > a ? b : b) << endl;

/*	Не доделал в случае "Числа равны", потому что тернарное условие в никакую не хотело выводить символы и с двойными кавычками, и 
	с одинарными ((4)2021.11.21 bolshemenshedvachisla.cpp(15) : error C2446: ':' : no conversion from 'const char *' to 'int')	*/

	system("pause");
	return 0;
}
