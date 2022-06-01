#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int n;
	cout << "Забыли нумерацию пальцев на руке? Не проблема!" << endl;
	cout << "Введите число не больше пяти = ";
	cin >> n;
	

	if(n <= 5 && (int)n - (n - (int)n) == 0){
		switch(n){
			case 1:
				cout << "Это большой палец" << endl;
				break;
			case 2:
				cout << "Это указательный палец" << endl;
				break;
			case 3:
				cout << "Это средний палец" << endl;
				break;
			case 4:
				cout << "Это безымянный палец" << endl;
				break;
			case 5:
				cout << "Это мизинец" << endl;
				break;
		}
	}else{
		cout << "Вы или балбес, или с Припяти сбежали" << endl;
	}

	system("pause");
	return 0;
}
