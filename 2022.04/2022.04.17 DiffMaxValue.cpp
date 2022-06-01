#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int maxValue(int first, int second);
double maxValue(double first, double second);
char maxValue(char first, char second);
int maxValue(int first, int second, int third);
double maxValue(double first, double second, double third);
char maxValue(char firts, char second, char third);


void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	cout << "int<2> = " << maxValue(7, 4) << endl;
	cout << "double<2> = " << maxValue(8.1, 3.9) << endl;
	cout << "char<2> = " << maxValue('a', 'b') << endl;
	cout << "int<3> = " << maxValue(3, 9, 10) << endl;
	cout << "double<3> = " << maxValue(3.4, 9.8, 10.2) << endl;
	cout << "char<3> = " << maxValue('a', 'b', 'c') << endl;

	system("pause >> null");
}

int maxValue(int first, int second)
{
	if(first > second){
		return first;
	}
	return second;
}

double maxValue(double first, double second)
{

	if(first > second){
		return first;
	}
	return second;
}

char maxValue(char first, char second)
{
	if(first > second){
		return first;
	}
	return second;
}

int maxValue(int first, int second, int third)
{
	return maxValue(first, maxValue(second, third));
}

double maxValue(double first, double second, double third)
{
	return maxValue(first, maxValue(second, third));
}

char maxValue(char first, char second, char third)
{
	return maxValue(first, maxValue(second, third));
}