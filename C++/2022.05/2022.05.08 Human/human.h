#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;


class Human {
public:
	char name[100];	
	void setName(char *newName);
	Human();
	Human(char* newName);
	~Human();
};
