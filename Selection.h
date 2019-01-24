#pragma once
#include "SortBase.h"
class CSelection :
	public CSortBase
{
public:
	CSelection(int max = 800) :CSortBase(max) { m_nCount = max - 1; }
	~CSelection();

	void Sorting();
	void Update();


};

