#include <iostream>
#include "Parent.h"
#include "Child.h"
#include "GrandChild.h"
#include <vector>

using namespace std;


int main()
{
	FParent* P = new FParent();

	std::cout << P << std::endl;



	vector<FParent*> Family;
	Family.push_back(new FChild());
	Family.push_back(new FChild());
	Family.push_back(new FGrandChild());
	Family.push_back(new FGrandChild());
	Family.push_back(new FGrandChild());

	for (int i = 0; i < Family.size(); ++i)
	{
		Family[i]->WhoamI();
	}

	for (int i = 0; i < Family.size(); ++i)
	{
		delete Family[i];
	}

	Family.clear();


	return 0;
}