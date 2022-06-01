#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	const int size = 3;
	int arr[size] = {1, -2, 56};
	int count = 0;

	cout << "Массив: ";
	for(int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}

	for(int i = 0; i < size; i++){
		if(arr[i] > 0){
			count++;
		}
	}

	cout << endl << "Всего в массиве положительных чисел = " << count << endl;

	system("pause >> null");
	return 0;
}
