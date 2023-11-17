#pragma once
class FParent
{
public:
	FParent();
	virtual	~FParent();

	void Spend();

	virtual void WhoamI();

protected:
	int Money = 100;

};

