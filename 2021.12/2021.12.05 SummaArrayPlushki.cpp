#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "��������� ����� �� 1 �� 9 ������������ � ��������� � ������������ 9 ���." << endl;
	cout << "������ ����� �� ����� ��������� 15, ���� ���� ��� ������ 15." << endl;

	const int size = 10;
	int a[size], b[size], c[size];
	for(int i = 0; i < size; i++){
		a[i] = rand() % 10;
		b[i] = rand() % 10;
		c[i] = a[i] + b[i];
		if(c[i] > 15){
			c[i] = 15;
		}
		cout << c[i] << endl;
	}
	
	system("pause");
	return 0;
}
