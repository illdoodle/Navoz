#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "–андомное число от 1 до 9 складываетс€ с рандомным и записываетс€ 9 раз." << endl;
	cout << "ѕричем сумма не будет превышать 15, даже если она больше 15." << endl;

	const int size = 10;
	int a[size], b[size], c[size];
	for(int i = 0; i < size; i++){
		a[i] = rand() % 10;
		b[i] = rand() % 10;
		c[i] = a[i] + b[i];
		if(c[i] > 15){
			c[i] = 15;
		}
		cout << c[i] << endl;
	}
	
	system("pause");
	return 0;
}
