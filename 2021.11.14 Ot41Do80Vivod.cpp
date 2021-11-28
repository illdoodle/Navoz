#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	for(int i = 41; i <= 80; i++){
		cout << i << (i % 10 ? " " : "\n");
	}

	system("pause");
	return 0;
}
