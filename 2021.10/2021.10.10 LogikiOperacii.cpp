#include <iostream>
using namespace std;

int main ()
{
	int a = 0, b = 0;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << endl;

	cout << "a > b : " << (a > b) << endl; // ������
	cout << "a < b : " << (a < b) << endl; // ������
	cout << "a >= b : " << (a >= b) << endl; // ������ ��� �����
	cout << "a <= b : " << (a <= b) << endl; // ������ ��� �����
	cout << "a = b : " << (a == b) << endl; // �����
	cout << "a != b : " << (a != b) << endl; // �� �����
	cout << "a && b : " << (a && b) << endl; // �
	cout << "a || b : " << (a || b) << endl << endl; // ���

	cout << "a < b || b < a : " << ( a < b || b < a) << endl; // ������

	// ����
	bool isRaining = true; // ������ �� ����?
	bool isOpen = false; // ������ 
	bool needOpen = !isOpen && isRaining; // ��������� �� ������?
	cout << "Otkrivat' Li Zont? " << needOpen << endl;

	system("pause");
	return 0;
}
