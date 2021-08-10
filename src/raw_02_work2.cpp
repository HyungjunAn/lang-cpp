#define USING_GUI
#include "cppmaster.h"
#include <map>
using namespace std;

// 1일차 thiscall 예제를 참고 하세요

int foo(int hwnd, int msg, int a, int b)
{
	switch (msg)
	{
	case WM_KEYDOWN:     cout << "keydown" << endl; break;
	case WM_LBUTTONDOWN: cout << "lbutton" << endl; break;
	}
	return 0;
}
int main()
{
	int h1 = ec_make_window(foo, "A");
	int h2 = ec_make_window(foo, "B");

	ec_process_message();
}



/*
// 아래의 Window 클래스를 만드는 것이 과제 입니다
class Window
{
	int hwnd;
public:

	void Create()
	{
		// 여기를 구현하세요..
		// 메세지 처리 함수도 Window 클래스 안에 추가하세요
	}

	virtual void LButtonDown() {}
	virtual void KeyDown() {}
};
class MyWindow : public Window
{
public:
	virtual void LButtonDown() { cout << "MyWindow  LButtonDown" << endl; }
	virtual void KeyDown() { cout << "MyWindow  KeyDown" << endl; }
};

int main()
{
	MyWindow w;
	w.Create(); // 이순간 윈도우가 생성되어야합니다.
				// 왼쪽 버튼을 누르면 MyWindow 의 LButtonDown() 함수가 호출되어야 합니다.

	ec_process_message();
}

*/

