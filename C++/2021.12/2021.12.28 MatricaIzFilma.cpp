#include <iostream>
#include <windows.h>
#include <math.h>
#include <time.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	srand((int)time(0));
	const int size = 20;
	COORD pos, lines[size];
	int len[size], speed, mode, color = 0;
	cout << "Введите режим скорости (от низшего 1 к высшему 3) матрицы = ";
	cin >> mode;
	switch(mode){
		case 1:
			speed = 50;
			color = 2;
			break;
		case 2:
			speed = 250;
			color = 4;
			break;
		case 3:
			speed = 1000; 
			break;
		default:
			cout << "Вы балбес" << endl;
	}

	for(int i = 0; i < size; i++){
		len[i] = rand() % 6 + 20;
		lines[i].Y = rand() % 50 - 20;
		lines[i].X = rand() % (80 / size) + i * (80 / size);
	}	
	int delay = 1000 / speed;
	delay = delay == 0 ? 0 : delay;

	while(1){
		for(int i = 0; i < size; i++){
			lines[i].Y++;
			if(lines[i].Y > 25 + len[i]){
				lines[i].X = rand() % (80/size) + i * (80/size);
				lines[i].Y = 0;
				len[i] = rand() % 6 + 5;
			}
			pos = lines[i];
			for(int j = 0; pos.Y && j < len[i]; j++, pos.Y--){
				if(pos.Y < 25 && pos.Y > -1){
					if(j == 0){
						SetConsoleTextAttribute(hConsole, (WORD) (0 << 4 | 15));
					}else if(j < len[i] / 2){
						SetConsoleTextAttribute(hConsole, (WORD) (0 << 4 | (10 + color)));
					}else{
						SetConsoleTextAttribute(hConsole, (WORD) (0 << 4 | (2 + color)));
					}
					SetConsoleCursorPosition(hConsole, pos);
					cout << (char) (rand() % 235 + 20);
				}				
			}
			if(pos.Y < 25 && pos.Y > -1){
				SetConsoleCursorPosition(hConsole, pos);
				SetConsoleTextAttribute(hConsole,(WORD)((0 << 4) | 0));
				cout << ' ';
			}
		}
		Sleep(delay);
	}

	system("pause >> null");
	return 0;
}
