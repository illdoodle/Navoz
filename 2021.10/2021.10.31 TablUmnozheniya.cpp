#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "��������� ���������� ������� ��������� ���������� ����� �� 10" << endl;

	int n;
	cout << "������� ����� = ";
	cin >> n;

	for (int i = 1; i <= 10; i++) {
		cout << n << " * " << (i < 10 ? " " : "") << i << " = " << (i * n < 10 ? " " : "") << i * n << endl;
	}

	system("pause");
	return 0;
}
