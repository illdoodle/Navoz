#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");

	const int size = 5;
	int a[size][size] = {{0}};
	int n = 1, cn = 0, dir = 0, j = 0, i = 0, dj = 0, di = 1;
	while(n <= 25){
		a[j][i] = n++;
		j+=dj, i+=di;
		if(i == size - cn && dir == 0){
			i--, j++;
			di = 0, dj = 1;
			dir++;
		}
		if(j == size - cn && dir == 1){
			j--, i--;
			di = -1, dj = 0;
			dir++;
		}
		if(i == cn - 1 && dir == 2){
			i++, j--;
			di = 0, dj = -1;
			cn++;
			dir++;
		}
		if(j == cn - 1 && dir == 3){
			i++, j++;
			di = 1, dj = 0;
			dir = 0;
		}
	}
	for(int j = 0; j < size; j++){
		for(int i = 0; i < size; i++){
			cout << a[j][i] << '\t';	
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
