#pragma once
#include "Tree.h"
const int PINE_GROW_RATE		= 2;
const int PINE_BIRTH			= 0;
const int PINE_OLD_AGE			= 200;
const int PINE_DEATH			= 250;
const int PINE_GROW_NEEDLES		= 5;

class TreeConif :
	public Tree
{
protected:

	//a factor of age and season must 
	//be implemented in derived classes
	virtual void setHealth(season aSeason);
	virtual void growLeaves();
	virtual void looseLeaves();
public:
	TreeConif(season aSeason=spring);
	~TreeConif(void);
};

