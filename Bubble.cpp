#include "stdafx.h"
#include "Bubble.h"



CBubble::~CBubble()
{
}


void CBubble::Sorting()
{
	if (m_nCount >= GetMax()) return;

		for (int j = 0; j < GetMax() - 1; j++)
		{
			if (GetData(j) > GetData(j + 1))
			{
				Swap(j, j + 1);
			}
		}
		m_nCount++;
	
}

void CBubble::Update()
{
	Sorting();
}

