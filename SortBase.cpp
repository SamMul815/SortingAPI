#include "stdafx.h"
#include "SortBase.h"



CSortBase::~CSortBase()
{
}

void CSortBase::InputData()
{

	for (int i = 0; i < m_nMax; i++)
	{
		m_nData[i] = i + 1;
	}

	for (int i = 0; i < m_nMax * 5; i++)
	{
		int n1 = rand() % m_nMax;
		int n2 = rand() % m_nMax;

		int temp;
		temp = m_nData[n1];
		m_nData[n1] = m_nData[n2];
		m_nData[n2] = temp;
	}

}

void CSortBase::Swap(int n1, int n2)
{
	int temp;
	temp = m_nData[n1];
	m_nData[n1] = m_nData[n2];
	m_nData[n2] = temp;
}

void CSortBase::Render(HDC hdc)
{
	RECT rc = { 0, 0, WINSIZEX, WINSIZEY };

	HBRUSH brush = CreateSolidBrush(RGB(255, 255, 255));
	FillRect(hdc, &rc, brush);
	DeleteObject(brush);


	for (int i = 0; i < GetMax(); i++)
	{
		MoveToEx(hdc, i + 10, GetData(i), NULL);
		LineTo(hdc, i + 10, 800);
	}
}
