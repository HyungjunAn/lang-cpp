#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) {}
};

int main()
{
	//Point* buff1 = new Point[5];

	Point* buff1 = static_cast<Point*>(
		operator new(sizeof(Point) * 5));

	for (int i = 0; i < 5; i++)
		new( &buff[i] ) Point(0, 0);

	// ���۸� Ű�� ���ô�.
	// 1. ���ο� ���۴� ���� �޸𸮸� �Ҵ� �մϴ�.

	Point* buff2 = static_cast<Point*>(
		operator new(sizeof(Point) * 10));

	// ���� ������ ������ ���ο� ���۷� �̵��մϴ�.
	for (int i = 0; i < 5; i++)
	{
		//buff2[i] = buff1[i]; // ���Կ�����
							// buff2�� ���� ������ �ȵ� ��ü�̴�.

		//new (&buff2[i]) Point( buff[i] ); // ���� ������ ȣ��
		
		//new (&buff2[i]) Point(move(buff[i])); // move������ȣ��

		new (&buff2[i]) Point(move_if_noexcept(buff[i]));
	}
	// ���ο� ����� ������ ȣ��.
	for (int i = 5; i < 10; i++)
	{
		new(&buff2[i]) Point(0, 0);
	}

	// ���� ���ۿ� ��ü �Ҹ��� ȣ���� �޸� ����
	for (int i = 0; i < 5; i++)
		buff1[i].~Point();
	operator delete(buff1);

	// ���ο� ���� �ּҸ� buff1 ���� �̵�
	buff1 = buff2;

	// ���� �����. �� ��ü�� �Ҹ��� ȣ���� �޸� ����.
	for (int i = 0; i < 10; i++)
		buff1[i].~Point();
	operator delete(buff1);
}

// cafe.naver.com/cppmaster   work.zip ��������.