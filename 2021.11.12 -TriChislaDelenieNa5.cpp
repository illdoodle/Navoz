#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int a, b, c;
	cout << "Программа находит ОДНУ сумму из трех чисел, которая делится на 5" << endl;

	cout << "Введите первое число = ";
	cin >> a;
	cout << "Введите второе число = ";
	cin >> b;
	cout << "Введите третье число = ";
	cin >> c;

	if((a + b) % 5 == 0){
		cout << "Первое и Второе число в сумме делятся на 5" << endl << "Результат = " << a + b / 5 << endl;
	}else if((b + c) % 5 == 0){
		cout << "Второе и Третье число в сумме делятся на 5" << endl << "Результат = " << b + c / 5 << endl;
	}else if((a + c) % 5 == 0){
		cout << "Первое и Третье число в сумме делятся на 5" << endl << "Результат = " << a + c / 5 << endl;
	}else if((a + b + c) % 5 == 0){
		cout << "Первое, Второе и Третье число в сумме делятся на 5" << endl << "Результат = " << a + b + c / 5 << endl;
	}else{
		cout << "Таких сумм нет" << endl;
	}

	system("pause");
	return 0;
}
