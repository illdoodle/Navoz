#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int a, b, c;
	cout << "��������� ���������� ������� ��� ������ ����� �� ���� ���������" << endl; 

	cout << "������� ������ ����� = ";
	cin >> a;
	cout << "������� ������ ����� = ";
	cin >> b;
	cout << "������� ������ ����� = ";
	cin >> c;

	cout << "������� ��� ������ ����� = " << (a > b && a > c ? a : b > a && b > c ? b : c ) << endl;
	
	system("pause");
	return 0;
}
