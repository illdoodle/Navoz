#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int a, c = 0;
	cout << "Введите число от 1 до 3 = ";
	cin >> a;

	switch (a) {
		case 1:
			c++;
		case 2:
			c++;
		case 3:
			c++;
	}

	cout << "Переменная без бреков = " << c << endl;
	c = 0;

	switch (a) {
		case 1:
		case 2:
		case 3:
			c++;
			break;
	}
	
	cout << "Переменная с бреками = " << c << endl;

	system("pause");
	return 0;
}
