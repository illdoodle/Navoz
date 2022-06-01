#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

class Human {
public:
	char name[100];
/*	
	void setName(char *newName){
		strcpy(name, newName);
	}
*/	
	Human(){
//		name[0] = 0;
		strcpy(name, "Mark");
	}
	Human(char* newName){
		strcpy(name, newName);
		cout << name << "_" << "constructed";
	}
	~Human(){
		cout << "destructed" << endl;
	}
};

void main()
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_ALL, "russian");

	int a;
	Human mark;
//	mark.setName("Mark");
	cout << mark.name << endl;
{
	Human h2("Oleg");
	cout << h2.name << endl;
}
	system("pause");
}
