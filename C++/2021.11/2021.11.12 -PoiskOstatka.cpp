#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	cout << "�����, ������� ��� ������� �� 133 ���� � ������� 125:" << endl;
	for(int i = 0; i <= 1000; i++) {
		if(i % 133 == 125){
			cout << i << endl;
		}
	}
	cout << endl;
	
	cout << "�����, ������� ��� ������� �� 134 ���� � ������� 111:" << endl;
	for(int i = 0; i <= 1000; i++) {
		if(i % 134 == 111){
			cout << i << endl;
		}
	}
	cout << endl;

	system("pause");
	return 0;
}
