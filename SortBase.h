#pragma once
#include "SortingProc.h"
#include <iostream>
#include <time.h>

class CSortBase : public SortingProc
{
private:
	int m_nMax;
	int *m_nData;
public:
	int m_nCount;
public:
	CSortBase(int max = 800) :m_nMax(max) { 
		m_nData = new int[m_nMax]; 
		ZeroMemory(m_nData, sizeof(int) *m_nMax);
	};
	~CSortBase();

	void InputData();
	void Swap(int n1, int n2);
	
	virtual void Sorting() = 0;
	/*v*/	void Render(HDC hdc);

	int GetData(int n) { return m_nData[n]; }
	void SetData(int n, int data) { m_nData[n] = data; }
	int GetMax() { return m_nMax; }

};

