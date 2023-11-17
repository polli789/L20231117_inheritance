#include "Child.h"
#include <iostream>


FChild::FChild()
{
	std::cout << "Fchild con" << std::endl;

}

FChild::~FChild()
{
	std::cout << "Fchild des" << std::endl;

}

void FChild::WhoamI()
{
	std::cout << "Fchild " << std::endl;

}
