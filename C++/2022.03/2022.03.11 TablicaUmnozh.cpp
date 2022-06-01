#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	//1 блок, задача про таблицу умножения
	for(int sm = 1; sm <= 9; sm++){
		for(int fm = 1; fm <= 9; fm++){
			cout << fm << " * " << sm << " = " << fm * sm << (fm * sm > 9 ? "  " : "   ");
		}
		cout << endl;
	}

	system("pause >> null");
	return 0;
}
