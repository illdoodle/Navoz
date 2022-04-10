#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int mySum(int a = 0, int b = 0, int c = 0);

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	int a1 = 0, a2 = 20, a3 = 40;
	cout << mySum(a1, a2) << endl;
	cout << mySum(a1, a2, a3) << endl;
	cout << mySum(a1) << endl;
	cout << mySum() << endl;

	system("pause >> null");
	return 0;
}

int mySum(int a, int b, int c)
{
	static int count = 0;
	cout << count++ << endl;
	return a + b + c;
}
