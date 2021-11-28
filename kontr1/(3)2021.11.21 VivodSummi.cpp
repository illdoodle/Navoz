#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "—читалка двух чисел" << endl;
	double a, b;
	cout << "¬ведите первое число = ";
	cin >> a;
	cout << "¬ведите второе число = ";
	cin >> b;
	cout << "a + b = " << a << " + " << b << " = " << a + b << endl; 

	system("pause");
	return 0;
}
