#pragma once
#include <vector>
#include "Tree.h"
#include "TreeDecid.h"
const int ONE_HUNDRED_YEARS = 10;

class Forrest
{
private:
	std::vector<Tree*> myTrees;

	void doSeason(season mySeason);
	//do not add implementation in cpp file
	//can never call this function, not by Tree or
	//by friends, or derived classes
	void cutDown();
public:
	Forrest(void);
	~Forrest(void);
	void live(int forhowmanyyears =ONE_HUNDRED_YEARS);
};

