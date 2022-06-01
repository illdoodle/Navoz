#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
 
	const int size = 9;
	char a[size] = {'B', 'a', 'r', 'c', 'e', 'l', 'o', 'n', 'a'};
	for(int i = 0; i < size; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i = 1; i < size; i++){
		cout << a[i] << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}
