
#include <iostream>
#include <memory>
using namespace std;

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

void* operator new(size_t sz)
{
	cout << sz << "byte �Ҵ�" << endl;
	return malloc(sz);
}

int main()
{
	// 331 page
	// ���� : �Ʒ� �ڵ�� ����� �޸� �Ҵ��� ������� ?
	// => 2��( ��ü ���鶧, ������ü(�������)���鶧)
	//shared_ptr<Point> sp( new Point(1, 1) );

	// ��ü + ������ü�� �ѹ��� �Ҵ��Ѵ�. - 331 �׸�
	// �޸� ����ȭ ������ ���ϼ� �ִ�.
	shared_ptr<Point> sp = make_shared<Point>(1, 1);

}






