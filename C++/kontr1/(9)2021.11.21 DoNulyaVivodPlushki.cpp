#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "������� �����, �� ������ �� ����!" << endl;
	int n = 1, count = 0;
	double sum = 0;

	while(n > 0){
		cout << "������� ����� = ";
		cin >> n;
		sum+=n;
		count++;
	}
	
	if(count > 1){
		count-=1;
	}
	cout << "� ���� �����������" << endl;
	cout << "���-�� ��������� ����� = " << count << endl;
	cout << "����� ���� �������� ����� = " << sum << endl;
	cout << "������� �������������� ���� ����� = " << sum / count << endl; 

	system("pause");
	return 0;
}
