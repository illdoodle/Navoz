#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int *x;
	while(1){
		x = new int[10];
		cout << "�� �������� 4 �����!" << endl;
		Sleep(1000);
		delete[]x;
		cout << "�� ������� 4 �����!" << endl;
		Sleep(1000);
	}

	system("pause >> null");
	return 0;
}
