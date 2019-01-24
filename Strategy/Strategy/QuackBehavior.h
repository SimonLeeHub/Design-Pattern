#pragma once
class CQuackBehavior
{
public:
	CQuackBehavior(void);
	~CQuackBehavior(void);

	virtual void quack(void) = 0;
};

