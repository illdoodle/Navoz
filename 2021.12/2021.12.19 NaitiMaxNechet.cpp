#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	const int size = 5;
	int a[size] = {77, 68, 11, 24, 103}, ind_max = 0;

	cout << "Максимальное нечетное из этих чисел: 77, 68, 1, 24, 103" << endl;

	while(ind_max < size && a[ind_max] % 2 == 0){
		ind_max++;
	}

	if(ind_max == size){
		cout << "Вы балбес" << endl;
	}else{
		for(int i = ind_max + 1; i < size; i++){
			if(a[i] % 2 && a[i] > a[ind_max]){
				ind_max = i;
			}
		}
		cout << ind_max + 1 << " число = " << a[ind_max] << endl;
	}

	system("pause");
	return 0;
}
