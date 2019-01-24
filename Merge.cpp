#include "stdafx.h"
#include "Merge.h"


CMerge::~CMerge()
{
}

void CMerge::Sorting()
{
	if (m_nCount > 0) return;

	int plusCount = GetMax();
	for (int i = 0; i < m_nCount; i++)
	{
		plusCount /= 2;
	}
	/*
	

	*/


	m_nCount--;


}

void CMerge::Update()
{
	MergeSort(0,GetMax()-1);
}

void CMerge::MergeSort(int first, int last)
{
	if (first < last)
	{
		int middle = (first + last) / 2;
		MergeSort(first, middle);
		MergeSort(middle + 1,last);
		Merge(first, middle, last);
	}
}

void CMerge::Merge(int f, int mid, int l)
{
	int temp[800];

	int first1 = f;
	int last1 = mid;

	int first2 = mid + 1;
	int last2 = l;

	int index = first1;


	for (; (first1 <= last1) && (first2 <= last2); index++)
	{
		if (GetData(first1) < GetData(first2))
		{
			temp[index] = GetData(first1);
			first1++;
		}
		else
		{
			temp[index] = GetData(first2);
			first2++;
		}
	}

	for (; first1 <= last1; first1++, index++)
	{
		temp[index] = GetData(first1);
	}
	for (; first2 <= last2; first2++, index++)
	{
		temp[index] = GetData(first2);
	}

	for (index = f; index <= l; index++)
	{
		SetData(index, temp[index]);
	}
}
