#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int n;
	cout << "������ ��������� ������� �� ����? �� ��������!" << endl;
	cout << "������� ����� �� ������ ���� = ";
	cin >> n;
	

	if(n <= 5 && (int)n - (n - (int)n) == 0){
		switch(n){
			case 1:
				cout << "��� ������� �����" << endl;
				break;
			case 2:
				cout << "��� ������������ �����" << endl;
				break;
			case 3:
				cout << "��� ������� �����" << endl;
				break;
			case 4:
				cout << "��� ���������� �����" << endl;
				break;
			case 5:
				cout << "��� �������" << endl;
				break;
		}
	}else{
		cout << "�� ��� ������, ��� � ������� �������" << endl;
	}

	system("pause");
	return 0;
}
