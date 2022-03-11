#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int shag = 7, size = 100;
	for(int i = 0; i < size; i+=shag){
		cout << i << " ";
	}

	system("pause >> null");
	return 0;
}
