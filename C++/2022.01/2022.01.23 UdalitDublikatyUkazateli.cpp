#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	int src[] = {1, 2, 6, 6, 8, 9, 9, 9, 69, 70, 71, 77, 77, 99};
	int *d, size = sizeof(src) / sizeof(int);

	cout << "Удаление дубликатов массива" << endl;
	cout << "Размер массива = " << size << endl;
	d = (int*)malloc(sizeof(src));
	memcpy(d, src, sizeof(src));
	cout << "Адрес = " << d << endl;
	cout << "Массив: ";
	for(int i = 0; i < size; i++){
		cout << d[i] << " ";
	}
	int *pCurr, *pEnd, *end;
	pCurr = pEnd = d;
	//Плохое решение
	end = d + size;
	for( ; pCurr < end; pCurr++){
		pEnd = pCurr + 1;
		while(pEnd < end && *pCurr == *pEnd){
			for(int *p = pEnd + 1; p < end; p++, pEnd++){
				*pEnd = *p;
			}
			end--;
			pEnd = pCurr + 1;
		}
	}

	cout << endl << endl << "Плохое решение" << endl <<  "Новый массив: ";
	for(int *p = d; p < end; p++){
		cout << *p << " ";
	}
	memcpy(d, src, sizeof(src));
	
	//Хорошее решение
	pCurr = d;
	for(int *pEnd = d + 1; pEnd < d + size; pEnd++){
		if(*pEnd > *pCurr){
			if(++pCurr < pEnd){
				*pCurr = *pEnd;
			}
		}
	}
	pCurr++;
	d = (int*)realloc(d, (pCurr - d) * sizeof(int));
	cout << endl << endl << "Хорошее решение" << endl << "Новый массив: ";
	for(int *p = d; p < pCurr; p++){
		cout << *p << " ";
	}
	free(d);

	system("pause >> null");
	return 0;
}
