
#include "Leaf.h"

void Leaf::setColor(color aColor){
	myColor = aColor;
}

//new leaves are green
Leaf::Leaf(): myColor(green)
{
}


Leaf::~Leaf(void)
{
}
