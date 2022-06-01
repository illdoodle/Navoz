#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	const int size = 16;
	int count = 0;
	char symbol = '*';
	COORD pos;
	pos.X = 10;
	pos.Y = 100;
	SetConsoleCursorPosition(hConsole, pos);
	cout << "1234567890" << endl;
	system("mode con cols=100 lines=35");

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			cout << symbol;
			count++;
			SetConsoleTextAttribute(hConsole, i << 8 | j);
		}
		cout << endl;
	}
	cout << "Всего символов = " << count << endl;

	system("pause");
	return 0;
}
