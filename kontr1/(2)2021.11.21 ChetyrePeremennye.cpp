#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double n;
	cout << "��� �������� ���� � �� �� ����� � ������ ����� ������" << endl;
	cout << "������� ����� ����� (����� ����������) = ";
	cin >> n;
	cout << "���� ����� � int = " << (int)n << endl;
	cout << "���� ����� � double = " << (double)n << endl;
	cout << "���� ����� � float = " << (float)n << endl;
	cout << "���� ����� � char = " << (char)n << endl;

	system("pause");
	return 0;
}
