#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "Программа выводит среднее арифметическое из пяти вводимых чисел" << endl;
	int n, sum = 0;
	for(int i = 0; i < 5; i++){
		cout << "Введите следующее число = ";
		cin >> n;
		sum+=n;
	}
	cout << "Среднее арифметическое = " << sum / 5.0 << endl;

	system("pause");
	return 0;
}
