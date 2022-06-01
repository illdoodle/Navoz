#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

template <class T>
T maxValue(T first, T second);
template <class T>
T maxValue(T first, T second, T third);

void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	cout << "int<2> = " << maxValue(7, 4) << endl;
	cout << "int<3> = " << maxValue(7, 4, 10) << endl;

	system("pause >> null");
}

template <class T>
T maxValue(T first, T second)
{
	if(first > second){
		return first;
	}
	return second;
}

template <class T>
T maxValue(T first, T second, T third)
{
	return maxValue(first, maxValue(second, third));
}