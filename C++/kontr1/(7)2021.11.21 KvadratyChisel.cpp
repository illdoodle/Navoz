#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "Таблица квадратов до 50" << endl;
	for(int i = 1; i <= 50; i++){
		cout << i << "=" << i * i << "\t";
	}
	cout << endl;

	system("pause");
	return 0;
}
