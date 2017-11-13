
#include "TreeConif.h"


TreeConif::TreeConif(season aSeason):Tree(PINE_GROW_RATE,great,PINE_BIRTH,aSeason)
{
}

//a factor of age and season
void TreeConif::setHealth(season aSeason){
	Tree::setHealth(aSeason);
	//TODO do any customization you need
}

TreeConif::~TreeConif(void)
{
}

void TreeConif::growLeaves(){
	std::cout<<"Growing PINE Leaves :^)\n";
}

void TreeConif::looseLeaves(){
	std::cout<<"Losing PINE Leaves :^(\n";
}

