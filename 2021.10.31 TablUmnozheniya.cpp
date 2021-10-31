#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int n;
	cin >> n;

	for (int i = 1; i <= 10; i++) {
		cout << i << " * " << n << " = " << i * n << endl;
	}

	system("pause");
	return 0;
}
