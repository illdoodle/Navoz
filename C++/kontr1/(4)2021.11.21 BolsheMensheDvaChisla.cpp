#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "������� �� ���� �������� �����" << endl;
	int a, b;
	cout << "������� ������ ����� = ";
	cin >> a;
	cout << "������� ������ ����� = ";
	cin >> b;
	cout << "������� ��� ������ ����� = " << (a > b ? a : b > a ? b : b) << endl;

/*	�� ������� � ������ "����� �����", ������ ��� ��������� ������� � ������� �� ������ �������� ������� � � �������� ���������, � 
	� ���������� ((4)2021.11.21 bolshemenshedvachisla.cpp(15) : error C2446: ':' : no conversion from 'const char *' to 'int')	*/

	system("pause");
	return 0;
}
