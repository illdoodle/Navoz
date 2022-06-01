#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	char str1[] = "abcd";
	char str2[] = "abcd";

	cout << "Первая строка: " << str1 << endl;
	cout << "Вторая строка: " << str2 << endl;

	int size1 = sizeof(str1) / sizeof(char);
	int size2 = sizeof(str2) / sizeof(char);

	int size;
	if(size1 > size2){
		size = size1;
	}else{
		size = size2;
	}

	bool isEqual = false;
	int count = 0;

	for(int i = 0; i < size1; i++){
		if(str1[i] == str2[i]){
			count++;
		}else{
			count--;
		}
	}
	if(count == size){
		isEqual = true;
	}
	
	if(isEqual){
		cout << "Строки равны!" << endl;
	}else{
		cout << "Строки не равны!" << endl;
	}

	system("pause >> null");
	return 0;
}
