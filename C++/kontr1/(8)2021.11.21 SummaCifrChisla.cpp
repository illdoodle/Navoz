#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int n, sum = 0;
	cout << "������� ����� = ";
	cin >> n;
	while(n!=0){
		sum += n%10;
        n /= 10;
	}

	cout << "����� ���� ����� ����� = " << sum << endl;
	system("pause");
	return 0;
}
