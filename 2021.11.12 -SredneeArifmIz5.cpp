#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double one, two, three, four, five;
	cout << "��������� ������� ������� �������������� �� ���� �������� �����" << endl;
	cout << "������� ������ ����� = ";
	cin >> one;
	cout << "������� ������ ����� = ";
	cin >> two;
	cout << "������� ������ ����� = ";
	cin >> three;
	cout << "������� ��������� ����� = ";
	cin >> four;
	cout << "������� ����� ����� = ";
	cin >> five;
	cout << endl;

	cout << "������� �������������� = " << (one + two + three + four + five) / 5 << endl;
	
	system("pause");
	return 0;
}
