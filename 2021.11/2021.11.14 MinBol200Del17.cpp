#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int i = 201;
	while(++i % 17);
	cout << i << endl;

	system("pause");
	return 0;
}
