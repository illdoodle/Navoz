#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int n, a;
	cout << "¬ведите число = ";
	cin >> a;
	cout << "¬ведите сколько раз вы будете повтор€ть это число = ";
	cin >> n;

	for (int i = 1; i <= n; i++){
		cout << a << "\t" << endl;
		Sleep(50);
	}

	system("pause");
	return 0;
}
