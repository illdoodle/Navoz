#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int a, b;
	cout << "����� ���� ����� �� ���������� ������� ����� �� �������" << endl << "�� ������� ������� �����!" << endl;

	cout << "������� ������ ����� = ";
	cin >> a;
	cout << "������� ������ ����� = ";
	cin >> b;
	

	for (int i = (a < b ? a : b); i <= (a < b ? b : a); i++) {
		cout << i << "\t" << endl;
		Sleep(50);
	}

	system("pause");
	return 0;
}
