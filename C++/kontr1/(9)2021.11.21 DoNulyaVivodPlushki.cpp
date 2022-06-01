#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "Вводите числа, но только не ноль!" << endl;
	int n = 1, count = 0;
	double sum = 0;

	while(n > 0){
		cout << "Введите число = ";
		cin >> n;
		sum+=n;
		count++;
	}
	
	if(count > 1){
		count-=1;
	}
	cout << "Я вами разочарован" << endl;
	cout << "Кол-во введенных чисел = " << count << endl;
	cout << "Сумма всех введеных чисел = " << sum << endl;
	cout << "Среднее арифметическое этих чисел = " << sum / count << endl; 

	system("pause");
	return 0;
}
