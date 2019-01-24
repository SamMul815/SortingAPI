#include "stdafx.h"
#include "SortingProc.h"
#include "resource.h"
#include "Bubble.h"
SortingProc::SortingProc()
{
}


SortingProc::~SortingProc()
{
}

void SortingProc::Init()
{
}

void SortingProc::Update()
{
}

void SortingProc::Render(HDC hdc)
{

}

LRESULT SortingProc::MainProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	HDC hMemDc;
	static HBITMAP hBitMap, hOoldBitMap;


	switch (iMessage)
	{
	case WM_TIMER:
		this->Update();
		InvalidateRect(hWnd, NULL, false);
	break;
	case WM_PAINT:
	{
		hdc = BeginPaint(hWnd, &ps);

		hMemDc = CreateCompatibleDC(hdc);								//뒤에 판때기 만들기
		hBitMap = CreateCompatibleBitmap(hdc, WINSIZEX, WINSIZEY);		//비트맵 판때기
		hOoldBitMap = (HBITMAP)SelectObject(hMemDc, hBitMap);			//

		this->Render(hMemDc);											//그릴꺼 계산

		BitBlt(hdc, 0, 0, WINSIZEX, WINSIZEY, hMemDc, 0, 0, SRCCOPY);	//화면 복사
		
		DeleteObject(SelectObject(hMemDc, hOoldBitMap));
		DeleteDC(hMemDc);

		EndPaint(hWnd, &ps);
	}
	break;
	case WM_KEYDOWN:
		switch (wParam)
		{
		case VK_ESCAPE:
			PostMessage(hWnd, WM_DESTROY, 0, 0);
			break;
		}
		break;

	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	}

	return (DefWindowProc(hWnd, iMessage, wParam, lParam));
}
