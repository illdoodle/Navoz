#include "human.h"

void Human::setName(char *newName){
	strcpy(name, newName);
}

Human::Human(){
	strcpy(name, "Mark");
}

Human::Human(char* newName)
{
	strcpy(name, newName);
	cout << name << "_" << "constructed";
}

Human::~Human()
{
	cout << "destructed" << endl;
}