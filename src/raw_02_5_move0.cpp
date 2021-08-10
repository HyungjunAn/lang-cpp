#include <iostream>
using namespace std;

// ���� �����ڸ� ��Ȯ�� ������ ���ô�.
class Point
{
	int x = 0;
	int y = 0;
public:
	Point() : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// �Ʒ� ����� ���� �����ڸ� �����Ϸ��� ����� �ݴϴ�.
	/*
	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
	}
	*/
	// ���� �������� ��� 1. call by value
	// ���� �����ڰ� ������ �ݺ�ȣ��Ǵ� �ڵ��̴�.
	// ������ ����.. ���� �������� ���ڴ� ��Ÿ�� �� �ɼ� ����.
	//Point(Point p)  // Point p = p2
	//{
	//}

	// 2. ���� : ������ �����ϴ�..
	// ������ : rvalue �� ������ ����.
	//         �� Ÿ���� ��ȯ�ϴ� �Լ��� ��ȯ���� ������ ����.
	//Point(Point& p) {}

	// 3. const lvalue referene : lvalue, rvalue�� ��� �޴´�.
	Point(const Point& p)
	{
		x = p.x;
		y = p.y;
	}
};

Point foo() 
{ 
	Point p(1, 1);  
	return p; 
}

int main()
{
	Point p1;		// 1
	Point p2(1, 2);	// 2
	Point p3(p2);	// Point(Point) ����� �����ڰ� �ʿ��ϴ�.
					// ���� ������...
	Point p4 = p1;  // Point p4(p1) �� ����(�ణ�� ���̰� �ֱ��ϴ�)
					// ���� ������

	Point p5 = foo();
}