#pragma once
#include "SortBase.h"
class CInsertion :
	public CSortBase
{
public:
	CInsertion(int max = 800) : CSortBase(max) { m_nCount = 1; };
	~CInsertion();

	void Sorting();
	void Update();

};

