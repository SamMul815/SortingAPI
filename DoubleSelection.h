#pragma once
#include "SortBase.h"
class CDoubleSelection :
	public CSortBase
{
private:
	int m_nLast;
public:
	CDoubleSelection(int max = 800) : CSortBase(max) { m_nCount = 0; m_nLast = max - 1; }
	~CDoubleSelection();

	void Sorting();
	void Update();

};

