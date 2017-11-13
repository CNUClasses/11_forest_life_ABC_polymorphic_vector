
#include "TreeDecid.h"


void TreeDecid::growLeaves(){
	LeafDecid myLeafDecid;

	//grow leaves 
	for (int i = 0; i < DECID_GROW_LEAVES; i++)
	{
		myLeafVector.push_back(std::unique_ptr<Leaf>(new LeafDecid()));
	}
	std::cout<<"Growing DECIDUOUS Leaves :^)\n";
}


void TreeDecid::looseLeaves(){
	myLeafVector.clear();
	std::cout<<"Losing DECIDUOUS Leaves :^(\n";
}



TreeDecid::TreeDecid(season aSeason):Tree(DECID_GROW_RATE,great,DECID_BIRTH,aSeason)
{

}


TreeDecid::~TreeDecid(void)
{
}

//a factor of age and season
void TreeDecid::setHealth(season aSeason){
	Tree::setHealth(aSeason);
	//TODO do any customization you need
}
