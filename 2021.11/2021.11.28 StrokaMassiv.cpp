#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
//	char str1[] = "aaaaaa";
	char str[] = "zeliboba";
//	char str2[] = "bbbbbb"; // ��� ��� str1 � str2 ������-�� ��������� ��� cout(�)
	cout << str << endl;

	int count = 0;
	while(str[count]){
		count++;
	}
//�������	str[-2] = 7;

	system("pause");
	return 0;
}
