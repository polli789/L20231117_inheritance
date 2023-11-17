#pragma once
#include "Parent.h"
//직접 상속하기
class FChild : public FParent
{
public:
	FChild();
	virtual ~FChild();

	virtual void WhoamI() override;

};

