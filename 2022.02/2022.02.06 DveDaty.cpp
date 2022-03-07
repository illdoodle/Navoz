#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	const int size = 3;
	int date1[size] = {2008, 03, 21};
	int date2[size] = {2000, 06, 14};

	bool isEnd = false;
	int count = 0;
	
	cout << "Первая дата: ";
	for(int i = 0; i < size; i++){
		cout << date1[i] << " ";	
	}
	cout << endl << "Вторая дата: ";
	for(int i = 0; i < size; i++){
		cout << date2[i] << " "; 
	}
	
	cout << endl;
	for(int i = 0; i < size && !isEnd; i++){
		if(date1[i] < date2[i]){
			cout << "Первая дата раньше второй!" << endl;
			isEnd = true;
			break;
		}else if(date1[i] > date2[i]){
			cout << "Первая дата позже второй!" << endl;
			isEnd = true;
			break;
		}else{
			count++;
		}
	}

	if(count == size){
		cout << "Даты равны!" << endl;
	}

	system("pause >> null");
	return 0;
}
