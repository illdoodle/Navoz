#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int year = 0;
	cout << "�������� ��������� �������� �� ���������� ����" << endl << "������� ��� = ";
	cin >> year;	

/*	
	int stoletie = year / 100;
	if (year % 100) {
		stoletie++;
	}

	cout << "�������� = " << stoletie << endl;	
*/

	cout << "�������� = " << (year + 99) / 100 << endl;
	
	system("pause");
	return 0;
}
