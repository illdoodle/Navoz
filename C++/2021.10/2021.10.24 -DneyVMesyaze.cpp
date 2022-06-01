#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int m;

	if (m > 12 || m < 1) {
		cout << "�������?" << endl;
	}

	cout << "��������� ����������, ������� ���� � ��������� ������ � ������� ����" << endl << "������� ����� = ";
	cin >> m;
	
	switch(m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 10:
		case 12:
	cout << "� ���� ������ 31 ����" << endl;
	}

	switch(m) {
		case 4:
		case 6:
		case 9:
		case 11:
	cout << "� ���� ������ 30 ����" << endl;
	}

	switch(m) {
		case 2:
	cout << "� ���� ������ 28 ����" << endl;
	}

	system("pause");
	return 0;
}
