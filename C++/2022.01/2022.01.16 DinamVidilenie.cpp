#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int size;
	cout << "������ = ";
	cin >> size;
	int *p;
	p = (int*)malloc(size * sizeof(int));
	cout << "����� = " << p << ", �������� = " << *p << endl;
	cout << "���� �������� = " << _msize(p) << endl;
	cout << "���������� �������: ";
	for(int i = 0; i < size; i++){
		p[i] = i * 3;
		cout << p[i] << " ";
	}
	free(p);

	cout << endl << endl << "������ = ";
	cin >> size;	
	p = (int*)malloc(size * sizeof(int));	
	cout << "����� = " << p << ", �������� = " << *p << endl;
	cout << "���� �������� = " << _msize(p) << endl;
	cout << "���������� �������: ";
	for(int i = 0; i < size; i++){
		p[i] = i * 3;
		cout << p[i] << " ";
	}
	
	cout << endl << endl << "������ = ";
	cin >> size;	
	p = (int*)realloc(p, size * sizeof(int));
	cout << "����� = " << p << ", �������� = " << *p << endl;
	cout << "���� �������� = " << _msize(p) << endl;
	cout << "���������� �������: ";
	for(int i = 0; i < size; i++){
		cout << p[i] << " ";
	}

	system("pause >> null");
	return 0;
}
