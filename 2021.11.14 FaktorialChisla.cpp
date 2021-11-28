#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int n, d = 2;
	cout << "Программа понимает, какой факториал принадлежит к указанному числу" << endl;
	cout << "Введите число = ";
	cin >> n;

	while(n % d == 0){
		n/=d++;
	}
	if(n == 1){
		cout << "Факториал = " << (d - 1) << endl;
	}else{
		cout << "Не факториал" << endl;
	}

	system("pause");
	return 0;
}
