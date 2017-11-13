
//for delays
#include <chrono>
#include <thread>

#include "TreeDecid.h"
#include "TreeConif.h"
#include "Forrest.h"
const int ONE_HUNDRED_MILLISECONDs = 100;

Forrest::Forrest(void)
{
}

Forrest::~Forrest(void)
{
	//for syntax, neat and simple, alternative to below
	//auto deduces the type
//	for(auto& p: myTrees)
//		delete p;
	
	//dont forget to delete what the iterator points to before the vecor goes out of scope
	for(std::vector<Tree*>::iterator it = myTrees.begin(); it != myTrees.end(); ++it) {
		delete *it;
	}
}

//go thru all the trees and apply a season 
void Forrest::doSeason(season mySeason){
	for(std::vector<Tree*>::iterator it = myTrees.begin(); it != myTrees.end(); ++it) {
		(*it)->liveThruSeason(mySeason);
	}
}
void Forrest::live(int forhowmanyyears)
{
	int year = 0;
	while (year <= forhowmanyyears)
	{
		//add 1 tree every year, this 
		//really should be determined by the trees
		//themselves, which means there needs to be some 
		//way to notify forrest of birth of a new tree
		myTrees.push_back(new TreeDecid);
		myTrees.push_back(new TreeConif);
		
		//myTrees.push_back(new TreeConif);

		doSeason(spring);
		doSeason(summer);
		doSeason(fall);
		doSeason(winter);
		std::cout<<"Year ="<<year++<<'\n';
		//snooze for a bit, get at least 1 ms and yield the time slice to boot
		std::this_thread::sleep_for(std::chrono::milliseconds(ONE_HUNDRED_MILLISECONDs));
	} 
}
