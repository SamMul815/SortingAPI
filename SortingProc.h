#pragma once
class SortingProc
{
public:
	SortingProc();
	~SortingProc();

	 virtual void Init();
	 virtual void Update();
	 virtual void Render(HDC hdc);


	LRESULT MainProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);

};

