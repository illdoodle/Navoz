#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	const int size = 10;
	//������ amax � amin, ������ ��� �� �����-�� ��������� ��� �������� ����� ������ ����������� ������� ����������� � ������������ 
	//�������� a[min] � a[max] ����������� 
	int min = 0, max = 0, amax, amin, temp;
	int a[size] = {44, 3, -2, 7, 123, 124, 4, 9, 12, 99};
	cout << "�����: ";
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i = 0; i < size; i++){
		if(min > a[i]){
			min = a[i];
			amin = i;
		}
	}
	cout << "����������� ����� = " << min << " ��� ������� = " << amin + 1 << endl;

	for(int i = 0; i < size; i++){
		if(max < a[i]){
			max = a[i];
			amax = i;
		}
	}
	cout << "������������ ����� = " << max << " ��� ������� = " << amax + 1 << endl;

	temp = a[amin];
	a[amin] = a[amax];
	a[amax] = temp;

	cout << "������ ������ �������� ���: ";
	for(int j = 0; j < size; j++){
		cout << a[j] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
