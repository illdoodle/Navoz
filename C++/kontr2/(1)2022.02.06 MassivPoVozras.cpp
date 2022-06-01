#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	const int size = 5;
	int a[size] = {0, 0, 0, 0, 0};
	int count = 0;
	cout << "Четные числа массива по возрастанию: " << endl;
	for(int i = 0; i < size; i++){
		a[i]+=count;
		count+=2;
		cout << a[i] << " ";
	}

	system("pause >> null");
	return 0;
}
