#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

void printLine(char sym, int size)
{
	for(int i = 0; i < size; i++){
		cout << sym;
	}
	cout << endl << endl;
}
void stars()
{
	for(int i = 0; i < 40; i++){
		cout << "*";
	}
	cout << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	cout << "����������� ������ = " << sum(69, 456) << endl;
	stars();
	cout << "����������� ������ ����� ��� = " << sum(1, 2) << endl;
	stars(); 
	int a, b;
	cout << "������� ������ 1 = ";
	cin >> a;
	printLine('~', 50);
	cout << "������� ������ 2 = ";
	cin >> b;
	printLine('~'), 50;
	cout << "������ = " << sum(a, b) << endl;
	printLine('-', 50);

	system("pause >> null");
	return 0;
}
