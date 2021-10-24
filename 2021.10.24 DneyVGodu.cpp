#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	int year = 0;
	cout << "Программа вычисляет, сколько дней в указанном году" << endl << "Введите год = ";
	cin >> year;

	if (year % 400 == 0 || year % 4 == 0 && year % 100){
		cout << "В году 366 дней" << endl;	
	} else {
		cout << "В году 365 дней" << endl;
	}

	system("pause");
	return 0;
}
