#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "�������� ���� �����" << endl;
	double a, b;
	cout << "������� ������ ����� = ";
	cin >> a;
	cout << "������� ������ ����� = ";
	cin >> b;
	cout << "a + b = " << a << " + " << b << " = " << a + b << endl; 

	system("pause");
	return 0;
}
