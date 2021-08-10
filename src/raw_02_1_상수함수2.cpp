#include <iostream>
using namespace std;

// 상수 멤버 함수는 선택이 아닌 필수 문법입니다.
// 객체의 상태를 변경하지 않은 모든 멤버 함수(getter) 는
// 반드시 상수 멤버 함수가 되어야 합니다.

class Rect
{
	int x = 0, y = 0, w = 0, h = 0;
public:
	int getArea()  { return w * h; }
};

// call by value 보다는 const & 가 좋다.
void foo(const Rect& r)
{
	int n = r.getArea(); // ?

	int n1 = const_cast<Rect&>(r).getArea();
}

int main()
{
	Rect r;
	int n = r.getArea(); // ok
	foo(r);
}




