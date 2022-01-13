
#include "Tree.h"

void Tree::liveThruSeason(season mySeason){

	setHealth(mySeason);

	switch (mySeason)
	{
	case fall:
		
		break;
	case winter:
		looseLeaves();
		break;
	case spring:
		growLeaves();
		break;
	case summer:
		growLeaves();
		break;
	default:
		break;
	}
}


Tree::Tree(int GrowRate, health Health ,int Age, season Season):myGrowRate(GrowRate),	myHealth(Health), myAge(Age), mySeason(Season)
{
}


Tree::~Tree(void)
{
}

//derived classes may want to customize
// this hence the virtual
void Tree::setHealth(season aSeason){
	//gonna use some combo of 
	//growthrate, age and season
	//to determine health
}
