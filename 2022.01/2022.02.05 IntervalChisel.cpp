#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int n;

	cout << "������� ����� ����� = ";
	cin >> n;

	if(n >= -5 && n <= 3){
		cout << "����� � ���������!" << endl;
	}else{
		cout << "����� ��� ���������!" << endl;
	}

	system("pause >> null");
	return 0;
}
