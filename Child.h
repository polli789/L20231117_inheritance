#pragma once
#include "Parent.h"
//���� ����ϱ�
class FChild : public FParent
{
public:
	FChild();
	virtual ~FChild();

	virtual void WhoamI() override;

};

