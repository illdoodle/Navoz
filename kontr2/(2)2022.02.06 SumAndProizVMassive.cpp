#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	const int size = 5;
	int a[size] = {1, 4, 2, 3, 5};
	int sum = 0, mult = 1;

	cout << "������: " << endl;
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";	
	}

	//�����
	for(int i = 0; i < size; i++){
		sum+=a[i];
	}

	//������������
	for(int i = 0; i < size; i++){
		mult*=a[i];
	}

	cout << endl << "����� ���� ��������� = " << sum << endl;
	cout << "������������ ���� ��������� = " << mult << endl;

	system("pause >> null");
	return 0;
}
