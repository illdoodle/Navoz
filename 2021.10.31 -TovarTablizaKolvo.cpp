#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	// ����������� ����, ����� ����, ���-��, ��������� ���-��
	double cena, icn;
	int kolvo, ik = 1;

	cout << "���� ��������� ����� � ��������� �����, ������� ���������� ���� ������������� ���������� ������" << endl;
	cout << "������� ���� ������ � ������ (����� ���� � ���� ���������� �����) = ";
	cin >> cena;
	cout << "������� ���������� ����� ������ = ";
	cin >> kolvo;
	system("pause");

	for (double ic = icn = cena; ik <= kolvo; icn+=ic) {
		cout << ik << " ��. = " << icn << " ���." << endl;
		ik++;
	}

	system("pause");
	return 0;
}
