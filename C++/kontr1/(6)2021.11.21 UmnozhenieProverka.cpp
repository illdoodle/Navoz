#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	

	cout << "��� ������� ���������!" << endl;

	srand(time(0));
	int n, a = rand() % 10 + 1, b = rand() % 10 + 1;

	cout << a << " * " << b << " = ";
	cin >> n;
	if(n == a * b){
		cout << "���������!" << endl;
	}else{
		cout << "�����������!" << endl;
	}	

	system("pause");
	return 0;
}
