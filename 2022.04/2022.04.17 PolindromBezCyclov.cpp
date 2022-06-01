#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

char *lastSymbol(char *sF);
bool isPolindrom(char *sF, char *endF = NULL);


void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");
	
	cout << "���������?" << endl;
	char s1[] = "�������������";
	char s2[] = "������";
	char s3[] = "���";
	char s4[] = "�����";
	char *s[] = {s1, s2, s3, s4, NULL};

	for(char **str = s; *str; str++){
		cout << *str;
		cout << (isPolindrom(*str) ? '+' : '-') << endl;
	}	

	system("pause >> null");
}

char *lastSymbol(char *sF)
{
	if(*sF){
		return lastSymbol(sF + 1);
	}
	return sF - 1;
}

bool isPolindrom(char *sF, char *endF)
{
	if(endF == NULL){
		endF = lastSymbol(sF);
	}
	if(sF >= endF){
		return true;
	}
	if(*sF == *endF){
		return isPolindrom(sF + 1, endF - 1);
	}
	return false;
}