#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int f(int n);

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	int n;
	cout << "¬ведите число = ";
	cin >> n;

	cout << n << "! = " << f(n) << endl;

	system("pause >> null");
	return 0;
}

int f(int n)
{
	if(n < 2){
		return 1;
	}
	return f(n - 1) * n;
}
