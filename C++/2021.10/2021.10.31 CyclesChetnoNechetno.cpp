#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int nach, kon;
	cout << "����� �������� ����� �� ���������� �� ����������" << endl;
	cout << "������� ��������� ������ ����� = ";
	cin >> nach;
	cout << "������� ��������� ������ ����� = ";
	cin >> kon;
	system("pause");
	
	for (nach; nach < kon; nach+=2) {
			cout << nach << "\t" << endl;
			Sleep(100);
	}

	system("pause");
	return 0;
}
