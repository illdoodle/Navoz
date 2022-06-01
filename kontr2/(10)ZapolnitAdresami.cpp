#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int a[3] = {1, 2, 3};
	for(int i = 0; i < 3; i++){
		a[i] = &a[i];
		cout << a[i] << " ";
	}

	system("pause >> null");
	return 0;
}
