#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	const int size = 10;
	int a[size] = {1, -2, 0, 23, 11, 10, 9, 21, 20, 66};
	cout << "Массив: " << endl;
	for(int j = 0; j < size; j++){
		cout << a[j] << " ";
	}
	int count = 0, maxCount = 0;
	for(int i = 0; i < size; i++){
		if(a[i] - a[i+1] == 1){
			count++;
		}
		if(maxCount < count){
			maxCount = count;
			count = 0;
		}
	}
	cout << endl << "Самая жирная цепочка из цифр = " << maxCount + 1 << endl;

	system("pause >> null");
	return 0;
}
