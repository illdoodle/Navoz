#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int m;
	cout << "Программа вычисляет сезон года по указанном месяцу" << endl << "Введите месяц = ";
	cin >> m;

/*	
	if ( m > 2 && m < 6 ) {
		cout << "Весна!" << endl;
	} else if ( m > 5 && m < 9 ) {
		cout << "Лето!" << endl;
	} else if ( m > 8 && m < 12 ) {
		cout << "Осень!" << endl;
	} else if ( m == 12 || m > 0 && m < 3 ) {
		cout << "Зима!" << endl;
	} else if ( m > 12 ) {
		cout << "Сколько-сколько месяцев?" << endl;
	}
*/

	switch (m) { 
	case 1:
	case 2:
	case 12:
		cout << "Зима!" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "Весна!" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "Лето!" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "Осень!" << endl;
		break;
	default: 
		cout << "Сколько-сколько месяцев?" << endl;
	}

	system("pause");
	return 0;
}
