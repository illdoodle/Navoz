#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int sum = 0, n1, n2;
	cout << "��������� ������� ����� ���� ����������� ����� ������ �� ���������� ������� �� ���������� �������" << endl;
	cout << "������� ������ ����� = ";
	cin >> n1;
	cout << "������� ������ ����� = ";
	cin >> n2;

	for (int i = n1; i <= n2; i++){
		sum += i;
	}

	cout << "����� = " << sum << endl;

	system("pause");
	return 0;
}
