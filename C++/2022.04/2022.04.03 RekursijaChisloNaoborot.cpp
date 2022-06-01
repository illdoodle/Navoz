#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void printInvert(int a);

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	int n;
	cout << "¬ведите число = ";
	cin >> n;

	printInvert(n);

	system("pause >> null");
	return 0;
}

void printInvert(int a)
{
	if (a < 0) {
		cout << (-a) % 10;
		if (a < -9) {
			printInvert(-a / 10);
		}
		cout << "-";
	} else {
		cout << a % 10;
		if (a > 9) {
			printInvert(a / 10);
		}
	}
}