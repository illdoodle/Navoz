#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	const int size = 7;
	int a[size];
	int tmp;

	cout << "Массив: ";
	for(int i = 0; i < size; i++){
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	
	for(int *l = a, *r = a + size - 1; l < r; l++, r--){
		tmp = *l;
		*l = *r;
		*r = tmp;
	}

	cout << endl << "Массив: ";
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
	}

	system("pause >> null");
	return 0;
}
