#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double n;
	cout << "Программа переводит миллиметры в сантиметры, дециметры, метры и километры" << endl << "Введите любое расстояние в миллиметрах = ";
	cin >> n;
	cout << n << " мм = " << n / 10 << " см = " << n / 100 << " дм = " << n / 1000 << " м = " << n / 1000000 << " км" << endl;

	system("pause");
	return 0;
}
