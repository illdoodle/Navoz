#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	int year = 0;
	cout << "��������� ���������, ������� ���� � ��������� ����" << endl << "������� ��� = ";
	cin >> year;

	if (year % 400 == 0 || year % 4 == 0 && year % 100){
		cout << "� ���� 366 ����" << endl;	
	} else {
		cout << "� ���� 365 ����" << endl;
	}

	system("pause");
	return 0;
}
