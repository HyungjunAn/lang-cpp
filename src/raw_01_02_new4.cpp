#include <iostream>
using namespace std;

// 02_new4
// 30 page
class Point
{
	int x, y;
public:
	Point(int a, int b) {}
};

int main()
{
	//Point pt1; // error. ����Ʈ �����ڰ� ����.
	Point pt2(0, 0); // ok.

	// ���� Point �Ѱ��� ����� ������
	Point* p1 = new Point(0, 0); // ok.


	// ���� Point 10���� ����� ������
	//Point* p2 = new Point[10]; // error. ����Ʈ �����ڰ� ����.

	// �޸� �Ҵ�� ������ ȣ���� �и��ϸ� ���ϴ�.
	Point* p2 = static_cast<Point*>(
		operator new(sizeof(Point) * 10));

	// 10���� �޸𸮿� 10���� ��ü�� ����(������ȣ��)
	for (int i = 0; i < 10; i++)
	{
		new( &p2[i] ) Point(0, 0); // placement new
	}

	// �Ҹ����� ����� ȣ���Ŀ� �޸� ����.
	for (int i = 9; i >= 0; i--)
		p2[i].~Point();

	operator delete(p2);



	//delete[] p2; // ???
}

// 30 page




