#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "Программа показывает кол-во пар одинаковых соседних символов" << endl;
	int c = 0;
	char s[100];
	cout << "Введите любое значение = ";
	cin >> s;
	for(int i = 0; s[i]; i++){
		if(s[i] == s[i+1]){
			c++;
		}
	}
	cout << c << " пар одинаковых соседних символов" << endl;

	system("pause");
	return 0;
}
