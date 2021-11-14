#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	cout << "Числа, которые при делении на 133 дают в остатке 125:" << endl;
	for(int i = 0; i <= 1000; i++) {
		if(i % 133 == 125){
			cout << i << endl;
		}
	}
	cout << endl;
	
	cout << "Числа, которые при делении на 134 дают в остатке 111:" << endl;
	for(int i = 0; i <= 1000; i++) {
		if(i % 134 == 111){
			cout << i << endl;
		}
	}
	cout << endl;

	system("pause");
	return 0;
}
