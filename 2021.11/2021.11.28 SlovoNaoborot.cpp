#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "Вводите шо хотите = ";
	char s[100];
	int c = 0;
	cin.getline(s, 100);
	while(s[c]){
		c++;
	}
	cout << "Наоборот!)Ыы" << endl;
	while(c--){
		cout << s[c];
	}
	cout << endl;

	system("pause");
	return 0;
}
