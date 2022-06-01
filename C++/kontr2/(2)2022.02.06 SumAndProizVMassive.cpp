#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	const int size = 5;
	int a[size] = {1, 4, 2, 3, 5};
	int sum = 0, mult = 1;

	cout << "Массив: " << endl;
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";	
	}

	//Сумма
	for(int i = 0; i < size; i++){
		sum+=a[i];
	}

	//Произведение
	for(int i = 0; i < size; i++){
		mult*=a[i];
	}

	cout << endl << "Сумма всех элементов = " << sum << endl;
	cout << "Произведение всех элементов = " << mult << endl;

	system("pause >> null");
	return 0;
}
