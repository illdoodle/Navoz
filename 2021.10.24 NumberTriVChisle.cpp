#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int n = 0;
	cout << "��������� �������� ��� ������, ���� �� � ���������� ����������� ����� ����� 3" << endl << "������� ���������� n = ";
	cin >> n;

	if (n > 9 && n < 100){
		if (n / 10 == 3 || n % 10 == 3) {
			cout << "����!" << endl; 
		} else {
			cout << "����!" << endl;
		}
	} else { 
		cout << "����� �� ����������!" << endl;
	}
	system("pause");
	return 0;
}
