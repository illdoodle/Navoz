#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "—дуиг :)" << endl;
	const int size = 5;
	int a[size] = {1, 2, 3, 4, 5};
	int count;
	/*
	cout << "¬ведите количество сдуигов";
	cin >> count;
	count%=size;	
	*/

	for(int i = 0; i < size; i++){
		cout << a[i] << "\t";
	}
	cout << endl;
	for(int k = 0; k < 5; k++){
		int tmp = a[size - 1];
		for(int i = size - 1; i; i--){
			a[i] = a[i - 1];
		}
		
		a[0] = tmp;
		for(int i = 0; i < size; i++){
			cout << a[i] << "\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
