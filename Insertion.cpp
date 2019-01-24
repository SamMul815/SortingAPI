#include "stdafx.h"
#include "Insertion.h"


CInsertion::~CInsertion()
{
}

void CInsertion::Sorting()
{
	if (m_nCount >= GetMax()) return;

	int pickData;

	pickData = GetData(m_nCount);

	int cur;
	for (cur = m_nCount; cur > 0 && GetData(cur-1) > pickData; cur--)
	{
		SetData(cur, GetData(cur - 1));
	}
	SetData(cur, pickData);

	m_nCount++;
}

void CInsertion::Update()
{
	Sorting();
}
