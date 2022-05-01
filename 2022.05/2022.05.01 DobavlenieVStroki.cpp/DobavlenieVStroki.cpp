#include "head.h"

void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");

	char s1[] = "abc";
	char s2[] = "def";
	char s3[] = "h";

	int n = 123;
	double d = -3.5;
	char str1[100];
	
	strcpy(str1, s1);
	cout << str1 << endl;
	strcpy(str1 + strlen(s1), s2);
	cout << str1 << endl;
	strcat(str1, s3);
	cout << str1 << endl;
	_itoa(n, str1 + strlen(str1), 10);
	cout << str1 << endl;

	system("pause >> null");
}
