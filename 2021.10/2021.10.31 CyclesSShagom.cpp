#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double nach, kon;
	cout << "����� ����� �� ���������� �� ���������� � ����� 0.4" << endl << "�� ������� ������ �����!" << endl;

	cout << "������� ������ ����� = ";
	cin >> nach;
	cout << "������� ������ ����� = ";
	cin >> kon;

	cout << "����� ����� �� " << nach << " �� " << kon << " � ����� 0.4" << endl;
	system("pause");

	for (double i = nach; i < kon; i+=0.4){
		cout << i << "\t" << endl;
		Sleep(100);
	}

	system("pause");
	return 0;
}
