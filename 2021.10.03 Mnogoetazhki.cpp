#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "Russian");
	cout << "�������� �������� = ";
	int n = 0;
	cin >> n;
	int p = (n - 1)/36 + 1;
	cout << "������� = " << p << endl;
	int e = (n - 1) / 4 % 9 + 1;
	cout << "���� = " << e << endl;

	system("pause");
	return 0;
}
