#pragma once
#include "Global.h"

class Leaf
{
private:
	color myColor;

public:
	virtual void setColor(color aColor);
	
	//new leaves are green
	Leaf();

	//base class constructors should always be virtual
	//that way the correct destructor is called
	virtual ~Leaf(void);
};

