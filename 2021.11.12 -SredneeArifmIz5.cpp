#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double one, two, three, four, five;
	cout << "Программа выводит среднее арифметическое из пяти введеных чисел" << endl;
	cout << "Введите первое число = ";
	cin >> one;
	cout << "Введите второе число = ";
	cin >> two;
	cout << "Введите третье число = ";
	cin >> three;
	cout << "Введите четвертое число = ";
	cin >> four;
	cout << "Введите пятое число = ";
	cin >> five;
	cout << endl;

	cout << "Среднее Арифметическое = " << (one + two + three + four + five) / 5 << endl;
	
	system("pause");
	return 0;
}
