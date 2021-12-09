#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Russian");

	cout << "Программа высчитывает подъезд и этаж 9-этажки по заданной квартире"<< endl <<"Введите Номер Квартиры = ";
	int n = 0;
	cin >> n;
	int p = (n - 1)/36 + 1;
	cout << "Подъезд = " << p << endl;
	int e = (n - 1) / 4 % 9 + 1;
	cout << "Этаж = " << e << endl;

	system("pause");
	return 0;
}
