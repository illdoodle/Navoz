#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	int sum = 0, cur;
	cout << "��������� ���������� ���������� ����� � �����" << endl;

	for (int i = 1; ; i++) {
		cout << "������� " << i << " ����� = ";
		cin >> cur;
		sum += cur;
		cout << "����� ����� = " << sum << endl;
	}

	system("pause");
	return 0;
}
