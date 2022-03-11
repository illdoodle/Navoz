#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	double s = 20.4;
	for(int i = 1; i <= 10; i++){
		cout << "Стоимость " << i << " штук = " << s * i << endl;
	}

	system("pause >> null");
	return 0;
}
