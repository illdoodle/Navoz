#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double sum = 0, n;

	cout << "��������� ������� ������� �������������� ���� ����� ����� �� ������� �� ����������" << endl;

	cout << "������� ����� = ";
	cin >> n;

	for (double i = 1; i <= n; i++){
		sum += i;
	}

	cout << "������� �������������� = " << sum / n << endl;

	system("pause");
	return 0;
}
