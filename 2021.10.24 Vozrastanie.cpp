#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	int x = 0, y = 0, z = 0;
	cout << "��������� ���������� ��� ���������� �� ��������" << endl << "������� ����������� x = ";
	cin >> x;
	cout << "������� ����������� y = ";
	cin >> y;
	cout << "������� ����������� z = ";
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
	
	cout << "���������� x y z �� �������� = " << x << " " << y << " " << z << endl;

	system("pause");
	return 0;
}
