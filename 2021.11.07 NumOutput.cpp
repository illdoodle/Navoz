#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "��������� ������� ����� �� �����" << endl;

	int r, c;

	cout << "������� ���-�� ����� = ";
	cin >> r;
	cout << "������� ���-�� �������� = ";
	cin >> c; 

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << "@ ";
		}
		cout << endl; 
	} 



	system("pause");
	return 0;
}
