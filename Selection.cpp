#include "stdafx.h"
#include "Selection.h"



CSelection::~CSelection()
{
}

void CSelection::Sorting()
{
	if (m_nCount < 0) return;


	int largest = 0;

	for (int cur = 0; cur <= m_nCount; cur++)
	{
		if (GetData(cur) > GetData(largest))
		{
			largest = cur;
		}
	}
	Swap(largest, m_nCount);
	m_nCount--;
}

void CSelection::Update()
{
	Sorting();
}
