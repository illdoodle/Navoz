#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	const int size = 3;
	int a[size][size] = {
		{1, 4, 2},
		{23, 11, 0}
	};
	int sum = 0;

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			sum+=a[i][j];
		}
	}
	cout << sum << endl;

	system("pause >> null");
	return 0;
}
