#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	double n;
	cout << "��������� ��������� ���������� � ����������, ���������, ����� � ���������" << endl << "������� ����� ���������� � ����������� = ";
	cin >> n;
	cout << n << " �� = " << n / 10 << " �� = " << n / 100 << " �� = " << n / 1000 << " � = " << n / 1000000 << " ��" << endl;

	system("pause");
	return 0;
}
