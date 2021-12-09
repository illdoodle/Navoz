#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "Список произведений всех целых чисел от 8 до 15" << endl;
	
	for(int j = 8; j <= 15; j++){
		for(int i = 8; i <= 15; i++){
			cout << (j < 10 ? " " : "") << j << " * ";
			cout << (i < 10 ? " " : "") << i << " = "; 
			cout << (i * j < 100 ? " " : "") << j * i << endl; 
		}
		cout << endl;
	}		

	system("pause");
	return 0;
}
