#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int incValue(int val);
int incRef(int &val);
int incPointer(int *val);

int main()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int a, res;
	a = 2;
	cout << "&a = " << &a << endl;
	res = incValue(a);
	cout << "a = " << a << endl;
	cout << "res = " << res << endl;
	
	cout << endl;
	res = incRef(a);
	cout << "a = " << a << endl;
	cout << "res = " << res << endl;

	cout << endl;
	res = incPointer(&a);
	cout << "a = " << a << endl;
	cout << "res = " << res << endl;

	system("pause >> null");
	return 0;
}

int incValue(int val)
{
	cout << "&val = " << &val << endl;
	val++;
	return val;
}

int incRef(int &val)
{
	cout << "&val = " << &val << endl;
	val++;
	return val;
}

int incPointer(int *val)
{
	cout << "&val = " << &val << endl;
	(*val)++;
	return *val;
}