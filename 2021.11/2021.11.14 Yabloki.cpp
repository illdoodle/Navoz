#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int eda;
	cout << "������� �� ������ �����?" << endl;
	cin >> eda;
	cout << "�� ������� " << eda << " ����";
	if(eda % 100 > 9 && eda % 100 < 20){
		cout << "�!" << endl;
	}else{
		switch(eda % 10){
			case 1:
				cout << "��!" << endl;
				break;
			case 2:
			case 3:
			case 4:
				cout << "��!" << endl;
				break;
			default:
				cout << "�!" << endl;
		}
	}

	system("pause");
	return 0;
}
