#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int m;
	cout << "��������� ��������� ����� ���� �� ��������� ������" << endl << "������� ����� = ";
	cin >> m;

/*	
	if ( m > 2 && m < 6 ) {
		cout << "�����!" << endl;
	} else if ( m > 5 && m < 9 ) {
		cout << "����!" << endl;
	} else if ( m > 8 && m < 12 ) {
		cout << "�����!" << endl;
	} else if ( m == 12 || m > 0 && m < 3 ) {
		cout << "����!" << endl;
	} else if ( m > 12 ) {
		cout << "�������-������� �������?" << endl;
	}
*/

	switch (m) { 
	case 1:
	case 2:
	case 12:
		cout << "����!" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "�����!" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "����!" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "�����!" << endl;
		break;
	default: 
		cout << "�������-������� �������?" << endl;
	}

	system("pause");
	return 0;
}
