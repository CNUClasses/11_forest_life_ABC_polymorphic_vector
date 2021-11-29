#pragma once
#include <vector>
#include "Tree.h"
#include "LeafDecid.h"

const int DECID_GROW_RATE	= 1;
const int DECID_BIRTH		= 0;
const int DECID_OLD_AGE		= 200;
const int DECID_DEATH		= 250;
const int DECID_GROW_LEAVES	= 5;

class TreeDecid :
	public Tree
{
protected:
	virtual void growLeaves();
	virtual void looseLeaves();


	//this is protected because derived classes
	//may want to call base class implementation
	virtual void setHealth(season aSeason);
	//virtual void sethealth(season aSeason);	//OH NO a little h! new function no override

public:
	TreeDecid(season aSeason=spring);
	virtual ~TreeDecid(void);
};

