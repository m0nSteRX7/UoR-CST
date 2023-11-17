#include "CGPrecomp.h"
#include "CGGlobals.h"

LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
void Render();

int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	MSG msg;
	g_Init.CreateAppWindow(WndProc, _T("CGApp"));
	//Call the function InitWindowed(...) with GInit object
	
	PeekMessage(&msg, NULL, 0U, 0U, PM_NOREMOVE);
	while(msg.message != WM_QUIT)
	{
		while(PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
		{
			//Process message
			TranslateMessage(&msg);
			DispatchMessage(&msg);
			Render();
		}
	}
	return (int) msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	if(message == WM_DESTROY)
		exit(0);
	return DefWindowProc(hWnd, message, wParam, lParam);
}

void Render()
{
	//Use the methods Clear () and Present()
	
	
}