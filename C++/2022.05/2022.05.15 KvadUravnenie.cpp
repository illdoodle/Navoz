#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

void calcRoot(double a, double b, double c);
void passPhrase(char *str);

void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	char str[] = "2x+-1+3x2=0";
	passPhrase(str);

	system("pause >> null");
}

void passPhrase(char *str)
{
	double a, b, c;
	char *formats[3] = {
		"%lgx2+%lgx+%lg=0",
		"%lg+%lgx+%lgx2=0",
		"%lgx+%lg+%lgx2=0",
	};
	double *abc[3][3] = {
		{&a, &b, &c},
		{&c, &b, &a},
		{&b, &c, &a},
	};
	for(int i = 0; i < 3; i++){
		int resScan = sscanf(str, formats[i], abc[i][0], abc[i][1], abc[i][2]);
		if(resScan == 3){
			cout << a << ", " << b << ", " << c << endl;
			calcRoot(a, b, c);
		}
	}

}

void calcRoot(double a, double b, double c)
{
	double D = b * b - 4 * a * c;
	if(D < 0){
		cout << "Действительных корней нет.";	
		return;
	}

	if(D == 0){
		cout << "Корень один = ";
		double x = -b / (2 * a);
		return;
	}

	if(D > 0){
		cout << "Первый корень = ";
		double x = (-b + sqrt(D)) / (2 * a);
		cout << x << endl;

		cout << "Второй корень = ";
		x = (-b - sqrt(D)) / (2 * a);
		cout << x << endl;
		return;
	}
}
