#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	const int size = 12;
	char str1[12] = "text";
	char *str2 = "text2";
	char str3[12] = "text3\0text4";
	cout << str1 << endl << str2 << endl << str3 << endl;
	for(int i = 0; i < size; i++){
		cout << str3[i] << " ";
	}
	cout << endl;
	for(char *i = str1; *i; i++){
		cout << *i << " ";
	}
	cout << endl;
	char *p;
	p = str1;
	while(*p){
		p++;
	}
	//Символов в str1 не считая \0
	cout << p - str1 << endl;

	system("pause >> null");
	return 0;
}
