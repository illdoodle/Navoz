#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	

	cout << "Нет времени объяснять!" << endl;

	srand(time(0));
	int n, a = rand() % 10 + 1, b = rand() % 10 + 1;

	cout << a << " * " << b << " = ";
	cin >> n;
	if(n == a * b){
		cout << "Правильно!" << endl;
	}else{
		cout << "Неправильно!" << endl;
	}	

	system("pause");
	return 0;
}
