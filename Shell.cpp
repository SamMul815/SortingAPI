#include "stdafx.h"
#include "Shell.h"



CShell::~CShell()
{
}

void CShell::Sorting()
{
	if (m_nHope <= 0) return;

	int j;
	//for (int i = m_nHope; i < GetMax(); i++)
	//{
	//	int v = GetData(i);
	//	j = i;

	//	while (j >= m_nHope && GetData(j - m_nHope) > v)
	//	{
	//		SetData(j, GetData(j - m_nHope));
	//		j -= m_nHope;
	//	}
	//	SetData(j, v);
	//}

	int v = GetData(m_nCount);
	j = m_nCount;

	while (j >= m_nHope && GetData(j - m_nHope) > v)
	{
		SetData(j, GetData(j - m_nHope));
		j -= m_nHope;
	}
	SetData(j, v);
	m_nCount++;

	if (m_nCount >= GetMax())
	{
		m_nHope = m_nHope / 3;
		m_nCount = m_nHope;
	}
}

void CShell::Update()
{
	Sorting();

}

