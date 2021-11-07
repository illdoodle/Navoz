#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "Программа показывает таблицу умножения" << endl; 

	for(int r = 1; r < 7; r+=5){
		for(int i = 1; i < 11; i++) {
			for(int j = r; j < r + 5; j++){
				cout << (i < 10 ? " " : "") << i << " * ";
				cout << (j < 10 ? " " : "") << j << " = ";
				cout << (i * j < 10 ? " " : "") << (j == 10 && i * j < 100 ? " " : "") << i * j << "\t";
			}
		}
		cout << endl;
	}


	system("pause");
	return 0;
}
