#pragma once
#include "SchoolBoy.h"

class SchoolClass
{
public:
	SchoolBoy **SBoys;
	void add(SchoolBoy*);
	SchoolClass(void);
	~SchoolClass(void);
};
