#pragma once

#include "Global.h"

class Tree
{
private:
	//plain virtual
	//virtual void setHealth(season aSeason);
	//virtual void growLeaves();
	//virtual void looseLeaves();

	//pure virtual functions
	//MUST be implemented in derived classes
	//makes this class abstract, so you CANNOT instantiate
	virtual void growLeaves()=0;
	virtual void looseLeaves()=0;
protected:
	//this is protected because derived classes
	//may want to call base class implementation
	virtual void setHealth(season aSeason);

	int		myGrowRate;
	health	myHealth;
	int		myAge;
	season	mySeason;

public:
	//goes to next season
	virtual void liveThruSeason(season Season);

	//tree starts at 0 years in great health, season varies
	Tree(int GrowRate, health Health ,int Age, season Season = spring);
	virtual ~Tree(void);
};

