#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	cout << "��������� ������� ������� ����� �� 100 �� 1000" << endl;
	system("pause");
	
	int c = 0;

	for(int n = 100; n < 1000; n++){

		bool isSimple = true;
		if(n % 2 == 0){
			isSimple = false;
		}
		for(int d = 3; d <= n / 2 && isSimple; d+=2, c++){
			if(n % d == 0){
				isSimple = false;
			}
		}
		if(isSimple){
			cout << n << endl;
		}
	}

	cout << "���-�� ����������� �������� = " << c << endl;

	system("pause");
	return 0;
}
