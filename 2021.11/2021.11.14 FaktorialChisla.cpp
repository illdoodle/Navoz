#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int n, d = 2;
	cout << "��������� ��������, ����� ��������� ����������� � ���������� �����" << endl;
	cout << "������� ����� = ";
	cin >> n;

	while(n % d == 0){
		n/=d++;
	}
	if(n == 1){
		cout << "��������� = " << (d - 1) << endl;
	}else{
		cout << "�� ���������" << endl;
	}

	system("pause");
	return 0;
}
