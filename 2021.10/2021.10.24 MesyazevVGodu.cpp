#include <iostream>
using namespace std;

int main ()
{
	int m = 0;
	setlocale(LC_ALL, "russian");
	cout << "��� ������� ���������, ������ ������� ������� � ����!!!11!" << endl << "� ������, ��� ������� � ���� ";
	cin >> m;
	
/*
	if (m == 12) {
		cout << "��� �� ������ �����" << endl;
	} else {
		cout << "��� � ������ �����" << endl;
	}
*/

	switch ( m ) {
		case 12:
			cout << "��� �� ������ �����" << endl; 
			break;
		default:
			cout << "��� � ������ �����" << endl;
	}	

	system("pause");1
	return 0;
}
