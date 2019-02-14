#pragma once
#include "turkey.h"
class CWildTurkey :
	public CTurkey
{
public:
	CWildTurkey(void);
	~CWildTurkey(void);

	void gobble(void);
	void fly(void);
};

