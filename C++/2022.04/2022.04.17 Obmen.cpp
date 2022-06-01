#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

template<class T>
void print(T first, T second);
template<class T>
void obmen(T &first, T &second);

void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");

	int a = 2, b = 3;
	double c = 3.7, d = 8;
	print(a, b);
	obmen(a, b);
	print(a, b);
	print(c, d);
	obmen(c, d);
	print(c, d);

	system("pause >> null");
}

template<class T>
void print(T first, T second)
{
	cout << "got " << typeid(T).name() << " = " << first << ", " << second << endl;
}

template<class T>
void obmen(T &first, T &second)
{
	T tmp = first; 
	first = second;
	second = tmp;
}
