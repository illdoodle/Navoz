#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	const int size = 9;
	int a[size] = {7, 2, 7, 3, 7, 11, 7, 6, 7};
	bool isExist;

	cout << "Изначальные числа: ";
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
	}

	for(int i = 0; i < size - 2; i++){
		isExist = false;
		for(int j = i + 1; j < size; j++){
			if(a[i] != a[j]){
				continue;
			}
			if(isExist){
				a[j] = 0;
			}
			isExist = true;
		}
	}

	cout << endl << "А теперь такие: ";
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
	}
	cout << endl << "Вот и гадайте по какому правилу они изменились" << endl;

	system("pause");
	return 0;
}
