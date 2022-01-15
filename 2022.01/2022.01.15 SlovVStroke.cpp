#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	const int size = 24;
	char a[size] = {"bla-bla bla bla-bla-bla"};
	int count = 0;

	for(int j = 0; j < size; j++){
		cout << a[j];
	}
	for(int i = 0; i < size; i++){
		if(a[i] == ' '){
			count++;
		}
	}
	cout << endl << "—лов в массиве = " << count + 1 << endl;

	system("pause >> null");
	return 0;
}
