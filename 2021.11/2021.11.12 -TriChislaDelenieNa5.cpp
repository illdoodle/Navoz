#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int a, b, c;
	cout << "��������� ������� ���� ����� �� ���� �����, ������� ������� �� 5" << endl;

	cout << "������� ������ ����� = ";
	cin >> a;
	cout << "������� ������ ����� = ";
	cin >> b;
	cout << "������� ������ ����� = ";
	cin >> c;

	if((a + b) % 5 == 0){
		cout << "������ � ������ ����� � ����� ������� �� 5" << endl << "��������� = " << a + b / 5 << endl;
	}else if((b + c) % 5 == 0){
		cout << "������ � ������ ����� � ����� ������� �� 5" << endl << "��������� = " << b + c / 5 << endl;
	}else if((a + c) % 5 == 0){
		cout << "������ � ������ ����� � ����� ������� �� 5" << endl << "��������� = " << a + c / 5 << endl;
	}else if((a + b + c) % 5 == 0){
		cout << "������, ������ � ������ ����� � ����� ������� �� 5" << endl << "��������� = " << a + b + c / 5 << endl;
	}else{
		cout << "����� ���� ���" << endl;
	}

	system("pause");
	return 0;
}
