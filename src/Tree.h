#pragma once
#include <vector>
#include <memory>
#include "Leaf.h"
#include "Global.h"

class Tree
{
protected:
	//pure virtual functions
	//MUST be implemented in derived classes
	//makes this class abstract, so you CANNOT instantiate
	virtual void growLeaves()=0;
	virtual void looseLeaves()=0;

	//where the leaves go
	std::vector<std::unique_ptr<Leaf>> myLeafVector;

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

