#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "��������� ���������� ������� ����� � ����� ����� � ���-�� � ������� � �����" << endl;

	int n, max = 0, count = 1;
	cout << "������� ����� = ";
	cin >> n;

	for(int i = 1; i <= n; i*=10){
		if(n / i % 10 > max){
			max = n / i % 10;
			count = 1;
		}else if(n / i % 10 == max){
			count++;
		}
	}

	cout << "������������ ����� = " << max << endl;
	cout << "����� ����������� = " << count << endl;

	system("pause");
	return 0;
}
