#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int year = 0;
	cout << "Програма вычисляет столетие из указанного года" << endl << "Введите год = ";
	cin >> year;	

/*	
	int stoletie = year / 100;
	if (year % 100) {
		stoletie++;
	}

	cout << "Столетие = " << stoletie << endl;	
*/

	cout << "Столетие = " << (year + 99) / 100 << endl;
	
	system("pause");
	return 0;
}
