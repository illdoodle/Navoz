#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
//	char str1[] = "aaaaaa";
	char str[] = "zeliboba";
//	char str2[] = "bbbbbb"; // Вот эти str1 и str2 почему-то выводятся без cout(а)
	cout << str << endl;

	int count = 0;
	while(str[count]){
		count++;
	}
//Бабайка	str[-2] = 7;

	system("pause");
	return 0;
}
