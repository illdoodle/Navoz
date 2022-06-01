#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	int a[6] = {0, -1, -2, -3, -4};
	const int size = 5;
	for(int i = 1; i <= size; i++){
		cout << a[0] << "  " << a[1] << "  " << a[2] << "  " << a[3] << "  " << a[4] << endl;
		for(int j = 0; j <= size; j++){
			a[j]+=1;
		}
	}

	system("pause");
	return 0;
}
