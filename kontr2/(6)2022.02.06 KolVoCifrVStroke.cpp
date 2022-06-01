#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	char str[] = "gdf22g3h4";
	int size = sizeof(str) / sizeof(char);

	char a[] = "0123456789";
	int count = 0;

	cout << "Строка = " << str << endl;

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(str[j] == a[i]){
				count++;
			}
		}
	}
	cout << "Кол-во цифр = " << count << endl;

	system("pause >> null");
	return 0;
}
