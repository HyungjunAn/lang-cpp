#include <iostream>
using namespace std;

// �ٽ� 1. malloc �� new �� ������

// �ٽ� 2. new�� ��Ȯ�� ���� ��� - 23 page
// A. �޸� �Ҵ� - operator new() ��� �Լ� ���
// B. ������ ȣ��
// C. �ּҸ� �ش� Ÿ������ ĳ�����ؼ� ��ȯ
class Point
{
	int x, y;
public:
	Point() { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
};

int main()
{
	// malloc : �޸� �Ҵ�
//	Point* p1 = static_cast<Point*>(malloc(sizeof(Point)));
//	free(p1);

	// new : �޸� �Ҵ� + ������ ȣ��
//	Point* p2 = new Point;
//	delete p2;


	// ������/�Ҹ��� ȣ����� �޸𸮸� �Ҵ�/����
	Point* p3 = static_cast<Point*>(
			operator new(sizeof(Point)));

	operator delete(p3);
}





