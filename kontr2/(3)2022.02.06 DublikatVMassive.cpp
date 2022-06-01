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
	int a[size] = {5, -2, 4, 5, 7};
	bool isDub = false;

	cout << "Массив: " << endl;
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
	}

	//Проверка дубликатов	
	for(int i = 0; i < size - 1; i++){
		for(int j = i + 1; j < size; j++){
			if(a[i] == a[j]){
				isDub = true;
			}
		}
	}

	cout << endl;
	if(isDub){
		cout << "Дубликаты есть!" << endl;
	}else{
		cout << "Дубликатов нет!" << endl;
	}

	system("pause >> null");
	return 0;
}
