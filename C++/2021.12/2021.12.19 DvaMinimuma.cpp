#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	const int size = 5;
	int a[size] = {1, 69, 456, 666, 777}, ind_min_1 = 0, ind_min_2 = 0;
	cout << "Два самых маленьких числа из: 1, 69, 456, 666, 777" << endl;
	for(int i = 1; i < size; i++){
		if(a[i] < a[ind_min_1]){
			ind_min_1 = i;
		}
	}
	if(ind_min_1 == 0){
		ind_min_2 = 1;
	}
	for(int i = ind_min_2 + 1; i < size; i++){
		if(a[i] < a[ind_min_2] && ind_min_1 != i){
			ind_min_2 = i;
		}
	}
	cout << "Самое минимальное число = " << a[ind_min_1] << ", под номером " << ind_min_1 << endl;
	cout << "Самое минимальное число после него = " << a[ind_min_2] << ", под номером " << ind_min_2 << endl;

	system("pause");
	return 0;
}
