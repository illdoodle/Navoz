#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "russian");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("mode con cols=81 lines=25");
	SetConsoleTextAttribute(hConsole, 2 << 4 | 2);

	int conH = 25, treeH = 17, treeX = 40;
	int colors[3] = {14 << 4, 12 << 4, 9 << 4}, currColor = 0, startColor = 0;
	int lampCount = 0;
	COORD pos;
	pos.X = treeX;
	pos.Y = conH - treeH - 2;
	COORD lamps[400] = {
		{10, 10},
		{20, 10},
		{30, 10},
	};

	for(int r = 0; r < treeH; r++, pos.Y++, pos.X--){
		SetConsoleCursorPosition(hConsole, pos);
		for(int c = 0; c < 2 * r + 1; c++){
			cout << " ";
			if(rand() % 6 == 0){
				lamps[lampCount].X = pos.X + c;
				lamps[lampCount].Y = pos.Y;
				lampCount++;
			}
		}
	}

	pos.X = treeX;
	for( ; pos.Y < conH; pos.Y++){
		SetConsoleTextAttribute(hConsole, 4 << 4 | 2);
		SetConsoleCursorPosition(hConsole, pos);
		cout << "    ";
		pos.X--;
	}

	pos.X = 0;
	pos.Y = 0;
	for( ; pos.X < 80; pos.X+=2){
		lamps[lampCount++] = pos;
	}
	pos.X = 0;
	pos.Y = 22;
	for( ; pos.Y > 0; pos.Y-=2){
		lamps[lampCount++] = pos;
	}
	pos.X = 80;
	pos.Y = 0;
	for( ; pos.Y < conH - 2; pos.Y+=2){
		lamps[lampCount++] = pos;
	}

	while(1){
		startColor++;
		currColor = startColor %= 3;
		for(int i = 0; i < lampCount; i++){
			SetConsoleCursorPosition(hConsole, lamps[i]);
			currColor++;
			currColor %= 3;
			SetConsoleTextAttribute(hConsole, colors[currColor]);
			cout << " ";
		}
		Sleep(500);
	}

	system("pause >> null");
	return 0;
}
