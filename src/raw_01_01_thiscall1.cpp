// cafe.naver.com/cppmaster �� �����Ͻø� �Խ��� �ֽ��ϴ�.
// 1���� ���� �ҽ� �޾� �μ���..

#include <iostream>
using namespace std;

// ���� : ��� �Լ��� ȣ�����
// �ٽ� 1. ��� �Լ��� ���ڷ� this �� �߰��ȴ�.
// �ٽ� 2. static ��� �Լ��� ���ڷ� this �� �߰����� �ʴ´�.
class Point
{
	int x;
	int y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) // set( Point* this , int a, int b)
	{
		x = a; // this->x = a;
		y = b; // this->y = b;  �� ����˴ϴ�.
	}
	static void foo(int a) //  void foo(int a)
	{
		x = a;// this->x = a;  �� ����ɼ� �־�� �մϴ�.
					// �׷���, this �� �����ϴ�.
					// �׷���, static ����Լ�������
					// ��� ����Ÿ ������ �ȵ˴ϴ�.
	}
};

int main()
{
	Point::foo(10); //ok.. ������ ��ü�� ����.

	Point p1, p2;

	p1.set(1, 2); // set(&p1, 1, 2) �� ����˴ϴ�.

					// push 2
					// push 1   ���� ���ڴ� ��������
					// mov ecx, &p1
					// call Point::set
	getchar();
}
