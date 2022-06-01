#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;


int m(int a, int b);

int main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
/*
	int t1, t2, t3;
	t1 = m(1, 2);
	t2 = m(7, 8);
	t3 = m(3, 4);
	t1 = m(t2, t3);
	t1 = m(t1, t3);
*/
	cout << m(m(m(1, 2), m(7, 8)), m(3, 4));
	cout << endl;
	cout << m(m(m(m(m(1, 2), 7), 8), 3), 4);

	system("pause >> null");
	return 0;
}

int m(int a, int b)
{
	if(a > b){
		return a;
	}
	return b;
}