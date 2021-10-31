#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int sum = 0;

	for (int i = 100; i <= 500; i++){
		sum += i;
	}
	cout << sum << endl;

	system("pause");
	return 0;
}
