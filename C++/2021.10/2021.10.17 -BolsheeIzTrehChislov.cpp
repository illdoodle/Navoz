#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int a, b, c;
	cout << "Программа показывает большее или равное число из трех указанных" << endl; 

	cout << "Введите первое число = ";
	cin >> a;
	cout << "Введите второе число = ";
	cin >> b;
	cout << "Введите третье число = ";
	cin >> c;

	cout << "Большее или равное число = " << (a > b && a > c ? a : b > a && b > c ? b : c ) << endl;
	
	system("pause");
	return 0;
}
