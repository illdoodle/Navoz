#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "Программа выводит кубик из цифр" << endl;

	int r, c, g = 0 ;

	cout << "Введите кол-во строк = ";
	cin >> r;
	cout << "Введите кол-во столбцов = ";
	cin >> c; 

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << g << " ";
			g++;
			switch(g){
				case 10:
					g = 0;
					break;
			}
		}	
		cout << endl; 
	} 



	system("pause");
	return 0;
}
