#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double sum = 0, n1, n2;

	cout << "��������� ������� ������� �������������� ���� ����� ����� �� ���������� �� ����������" << endl;

	cout << "������� ������ ����� = ";
	cin >> n1;
	cout << "������� ������ ����� = ";
	cin >> n2;

	for (double i = n1; i <= n2; i++){
		sum += i;
	}

	cout << "������� �������������� = " << sum / n2 << endl;

	system("pause");
	return 0;
}
