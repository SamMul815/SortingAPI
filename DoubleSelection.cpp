#include "stdafx.h"
#include "DoubleSelection.h"



CDoubleSelection::~CDoubleSelection()
{
}

void CDoubleSelection::Sorting()
{
	if (m_nCount > GetMax() / 2) return;

		int min = m_nCount;
		int max = m_nLast;

		for (int j = m_nCount; j < m_nLast + 1; j++)
		{
			if (GetData(min) >= GetData(j))
				min = j;

			if (GetData(max) <= GetData(j))
				max = j;
		}
		if ((min == m_nCount && max == m_nLast))
		{
		}
		else if ((min == m_nLast && max == m_nCount))
		{
			int t;
			Swap(min, max);
		}
		else if (max == m_nCount)
		{
			int t;
			Swap(max, m_nLast);
			Swap(min, m_nCount);
		}
		else
		{
			int t;
			Swap(min, m_nCount);
			Swap(max, m_nLast);

		}
		m_nCount++;
		m_nLast--;
}

void CDoubleSelection::Update()
{
	Sorting();
}
