#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	// ���������� ���� �����
	int a, b;
	cout << "������� a = ";
	cin >> a;
	cout << "������� b = ";
	cin >> b;
	
	// ������ <-> ������ <-> ����� = ������� ��!
	/* 
	cout << "������� ����� = ";
	if (a > b) {
		cout << "a = " << a << endl;
	} else if (a < b) {
		cout << "b = " << b << endl;
	} else { 
		cout << "Fatal Error! Pereustanavlivay Shindows." << endl;
	} 
	*/

	//  ������� ����� = �� ��������������!
	cout << "������� ��� ������ ����� = " << (a > b ? a : b) << endl;

	system("pause");
	return 0;
}
