#pragma once
#include "SortBase.h"
class CShell :
	public CSortBase
{
private:
	int m_nHope;
public:
	CShell(int max = 800) :
		CSortBase(max) 
	{
		for (m_nHope = 1; m_nHope < max / 9; m_nHope = m_nHope * 3 + 1);
		m_nCount = m_nHope;
		//m_nCount = 0;
	};
	~CShell();

	void Sorting();
	void Update();


};

