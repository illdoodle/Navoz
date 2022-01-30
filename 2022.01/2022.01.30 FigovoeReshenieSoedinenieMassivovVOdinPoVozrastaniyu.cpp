#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int countArr = 3;
	int a0[] = {2, 13, 44, 71};
	int a1[] = {1, 69};
	int a2[] = {22, 69, 69, 69, 77};
	int *a;
	a = new int [(sizeof(a0) + sizeof(a1) + sizeof(a2)) / sizeof(int)];
	int *pa = a;
	int **p = new int *[countArr];
	int **src;
	src = new int*[countArr];
	int **min;

	src[0] = new int[sizeof(a0) / sizeof(int) + 1];
	src[1] = new int[sizeof(a1) / sizeof(int) + 1];
	src[2] = new int[sizeof(a2) / sizeof(int) + 1];
	
	memcpy(p, src, countArr * sizeof(int*));
	memcpy(src[0], a0, sizeof(a0));
	memcpy(src[1], a1, sizeof(a1));
	memcpy(src[2], a2, sizeof(a2));

	src[0][sizeof(a0) / sizeof(int)] = 0;
	src[1][sizeof(a1) / sizeof(int)] = 0;
	src[2][sizeof(a2) / sizeof(int)] = 0;

	for(int i = 0; i < countArr; i++){
		for(int j = 0; src[i][j]; j++){
			cout << src[i][j] << " ";
		}
		cout << endl;
	}

	while(1){
		min = p;
		while(min < p + countArr && **min == 0){
			*min++;
		}
		if(min == p + countArr){
			break;
		}		
		for(int **i = min + 1; i < p + countArr; i++){
			if(**i && **i < **min){
				min = i;
			}
		}
		*pa = **min;
		pa++;
		++*min;
	}
	for(int *i = a; i < pa; i++){
		cout << *i << " ";
	}

	system("pause >> null");
	return 0;
}
