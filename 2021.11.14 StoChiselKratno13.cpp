#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	
	cout << "Все числа до ста кратные 13" << endl;
	for(int i = 13; i <= 100; i+=13){
			cout << i << endl;
	}

	system("pause");
	return 0;
}
