#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "��������� ������� ������� �������������� �� ���� �����" << endl;
	int n, sum = 0;
	for(int i = 0; i < 5; i++){
		cout << "������� ��������� ����� = ";
		cin >> n;
		sum+=n;
	}
	cout << "������� �������������� �� ���� ����� = " << sum / 5.0 << endl;

	system("pause");
	return 0;
}
