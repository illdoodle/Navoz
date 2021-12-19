#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	char s[] = "t3e3x"; // Случайное значение
	int sum = 0;
/*	for(unsigned char c = 0; c < 255; c++){
		cout << c << " - " << (int)c << "\t";
	}											*/ // Таблица
	
	cout << "Значение чара = " << s << endl;
	for(int i = 0; s[i]; i++){
		if(s[i] >= '0' && s[i] <= '9'){
			cout << s[i] << endl;
			sum+=s[i] - '0';
		}
	}

	cout << "Сумма чисел в чаре = " << sum << endl;

	system("pause");
	return 0;
}
