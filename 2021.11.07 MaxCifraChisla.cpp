#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "Программа показывает бОльшую цифру в целом числе и кол-во её повтора в числе" << endl;

	int n, max = 0, count = 1;
	cout << "Введите число = ";
	cin >> n;

	for(int i = 1; i <= n; i*=10){
		if(n / i % 10 > max){
			max = n / i % 10;
			count = 1;
		}else if(n / i % 10 == max){
			count++;
		}
	}

	cout << "Максимальное число = " << max << endl;
	cout << "Число повторяется = " << count << endl;

	system("pause");
	return 0;
}
