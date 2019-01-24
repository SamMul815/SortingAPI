#pragma once
#include "SortBase.h"
class CMerge :
	public CSortBase
{
private:
	int m_nMergeCount;
	int* m_pFirst;
	int* m_pLast;

public:
	CMerge(int max = 800) :CSortBase(max) 
	{ 
		int i;
		for (i = max; i > 0; i = i / 2)
			m_nCount++;
		m_nCount--;

		m_pFirst = new int[m_nCount];
		m_pLast = new int[m_nCount];

	}
	~CMerge();

	void Sorting();
	void Update();

	void MergeSort(int first, int last);
	void Merge(int f, int mid, int l);


};

