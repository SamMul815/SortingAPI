#pragma once
#include "SortBase.h"
class CBubble :
	public CSortBase
{
public:
	CBubble(int max = 800) :CSortBase(max) { m_nCount = 0; }
	~CBubble();

	void Sorting();
	void Update();
};

