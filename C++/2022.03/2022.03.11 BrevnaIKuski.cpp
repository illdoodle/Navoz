#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	//1 ����, ������ ��� ������
	int b, k;
	cout << "����� ������ = ";
	cin >> b;
	cout << "����� ����� = ";
	cin >> k;
	cout << "�������� ����� ������ = " << b / k << endl;

	system("pause >> null");
	return 0;
}
