#include "SchoolClass.h"

void SchoolClass::add(SchoolBoy* boy)
{
	int count = 0;
	if(SBoys){
		count = _msize(SBoys) / sizeof(SchoolBoy*);
		SBoys = (SchoolBoy**)realloc(SBoys, (count + 1) * sizeof(SchoolBoy*));
	}else{
		SBoys = (SchoolBoy**)malloc(sizeof(SchoolBoy));
	}
	SBoys[count] = boy;
}

SchoolClass::SchoolClass()
{
	SBoys = NULL;
}

SchoolClass::~SchoolClass()
{
	if(SBoys){
		free(SBoys);
	}
}
