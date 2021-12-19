#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	

	int a[5];
	cout << "¬ывод самого крупного числа из указанных п€ти" << endl;

	for(int j = 0; j < 5; j++){
		cout << "¬ведите следующее число = ";
		cin >> a[j];
	}
	int i_max = 0;
	for(int i = 1; i < 5; i++){
		if(a[i] > a[i_max]){
			i_max = i;
		}
	}
	cout << "ћаксимальное число из указанных = " << a[i_max] << endl;
	cout << "Ќомер, под которым сидит максимальное число = " << i_max + 1 << endl;

	system("pause");
	return 0;
}
