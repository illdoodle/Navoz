#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	const int size = 7;
	int a[size];
	int *p;
	p = a;
	for(int i = 0; i < size; i++){
		a[i] = (i + 2) * (i + 2);
		cout << a[i] << " ";
	}
	cout << endl;
	cout << p[1] << " ";
	p++;
	cout << p[1] << " ";
	cout << p[0] << " ";
	cout << *p << " ";
	cout << *(p + 1) << " ";
	p+=2;
	cout << p[1] << " ";
	cout << p[-1] << " " << endl;
	for(int *i = a; i < a + size; i++){
		cout << *i << " "; 
	}

	system("pause >> null");
	return 0;
}
