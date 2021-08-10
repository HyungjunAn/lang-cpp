#define USING_GUI
#include "cppmaster.h"
#include <map>
using namespace std;

// 1���� thiscall ������ ���� �ϼ���

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
// �Ʒ��� Window Ŭ������ ����� ���� ���� �Դϴ�
class Window
{
	int hwnd;
public:

	void Create()
	{
		// ���⸦ �����ϼ���..
		// �޼��� ó�� �Լ��� Window Ŭ���� �ȿ� �߰��ϼ���
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
	w.Create(); // �̼��� �����찡 �����Ǿ���մϴ�.
				// ���� ��ư�� ������ MyWindow �� LButtonDown() �Լ��� ȣ��Ǿ�� �մϴ�.

	ec_process_message();
}

*/

