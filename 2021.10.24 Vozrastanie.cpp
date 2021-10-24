#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	int x = 0, y = 0, z = 0;
	cout << "Программа раставляет три переменные по убыванию" << endl << "Введите однозначный x = ";
	cin >> x;
	cout << "Введите однозначный y = ";
	cin >> y;
	cout << "Введите однозначный z = ";
	cin >> z;
	cout << endl;

	if (x < y) {
		int tmp = x;
		x = y;
		y = tmp;
	}

	if (y < z) { 
		int tmp = y;
		y = z;
		z = tmp;
	}

	if (x < y) {
		int tmp = x;
		x = y;
		y = tmp;
	}
	
	cout << "Переменные x y z по убыванию = " << x << " " << y << " " << z << endl;

	system("pause");
	return 0;
}
