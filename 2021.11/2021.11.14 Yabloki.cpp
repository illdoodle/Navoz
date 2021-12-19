#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int eda;
	cout << "—колько вы хотите €блок?" << endl;
	cin >> eda;
	cout << "¬ы съедите " << eda << " €бло";
	if(eda % 100 > 9 && eda % 100 < 20){
		cout << "к!" << endl;
	}else{
		switch(eda % 10){
			case 1:
				cout << "ко!" << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "ка!" << endl;
				break;
			default:
				cout << "к!" << endl;
		}
	}

	system("pause");
	return 0;
}
