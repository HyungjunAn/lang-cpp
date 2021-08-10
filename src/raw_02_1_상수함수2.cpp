#include <iostream>
using namespace std;

// ��� ��� �Լ��� ������ �ƴ� �ʼ� �����Դϴ�.
// ��ü�� ���¸� �������� ���� ��� ��� �Լ�(getter) ��
// �ݵ�� ��� ��� �Լ��� �Ǿ�� �մϴ�.

class Rect
{
	int x = 0, y = 0, w = 0, h = 0;
public:
	int getArea()  { return w * h; }
};

// call by value ���ٴ� const & �� ����.
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




