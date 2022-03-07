#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int n;

	cout << "¬ведите любое число = ";
	cin >> n;

	if(n >= -5 && n <= 3){
		cout << "„исло в диапазоне!" << endl;
	}else{
		cout << "„исло вне диапазона!" << endl;
	}

	system("pause >> null");
	return 0;
}
