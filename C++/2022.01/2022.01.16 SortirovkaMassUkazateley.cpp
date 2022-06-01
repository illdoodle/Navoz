#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int size = 20;
	int *a = new int[size];
	cout << "Сортировка по убыванию используя указатели" << endl;
	cout << "Массив: ";
	for(int *p = a; p < a + size; p++){
		*p = rand() % 100;
		cout << *p << " ";
	}
	cout << endl;
	
	for(int *k = a + size; k > a; k--){
		for(int *l = a; (l + 1) < k; l++){
			if(*l > *(l + 1)){
				int tmp = *l;
				*l = *(l + 1);
				*(l + 1) = tmp;
			}
		}
	}

	cout << "Новый массив: ";
	for(int *p = a; p < a + size; p++){
		cout << *p << " ";
	}

	system("pause >> null");
	return 0;
}
