#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double nach, kon, shag;
	cout << "��������� ��������� ������ ����� �� ���������� �� ���������� � ��������� �����" << endl;

	cout << "������� ������ ����� = ";
	cin >> nach;
	cout << "������� ������ ����� = ";
	cin >> kon;
	cout << "������� ��� = ";
	cin >> shag; 
	system("pause");

	for (double i = nach; i <= kon && i >= nach || i >= kon && i <= nach; nach < kon ? i+=shag : i-=shag) {
		cout << i << endl;
		Sleep(100);
	}

	system("pause");
	return 0;
}
