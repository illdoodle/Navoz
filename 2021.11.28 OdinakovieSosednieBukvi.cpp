#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "��������� ���������� ���-�� ��� ���������� �������� ��������" << endl;
	int c = 0;
	char s[100];
	cout << "������� ����� �������� = ";
	cin >> s;
	for(int i = 0; s[i]; i++){
		if(s[i] == s[i+1]){
			c++;
		}
	}
	cout << c << " ��� ���������� �������� ��������" << endl;

	system("pause");
	return 0;
}
