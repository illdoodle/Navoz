#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//1 ����, ������ ��� ����� ������ � ���-�� ���� � ���
	int n; 
	cout << "������� ����� ������ = ";
	cin >> n;
	
	if(n <= 0 || n >= 12){
		cout << "�� ������ ������ ������." << endl;
		Sleep(1500);
		exit(0);
	}
	if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
		cout << "31 ����" << endl;
	}else if(n == 4 || n == 6 || n == 9 || n == 11){
		cout << "30 ����" << endl;
	}else{
		cout << "28-29 ���� " << endl;
	}

	system("pause >> null");
	return 0;
}
