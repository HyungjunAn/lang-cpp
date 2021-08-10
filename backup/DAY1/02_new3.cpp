#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point()  { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
};

// �Ʒ� �ڵ尡 ��ƽ��ϴ�. �߻����� ������
// �Ʒ� �Լ��� ��� Ÿ�Կ� ���� �����ڸ� ��������� ȣ���ϱ� ����
// �Լ� �Դϴ�.
// placement new ��� ����Դϴ�
/*
// �Ʒ� �Լ��� C++ǥ��(C++98/03) ���ֽ��ϴ�.
void* operator new(size_t sz, void* p)
{
	return p;
}
*/


int main()
{
	Point p;

	//new Point; // ���ڰ� �Ѱ��� operator new() ���.
	new( &p ) Point; // ���ڰ� 2���� ���� �ִ� operator new() ���.
	// �ᱹ . �� ǥ���� �޸� �Ҵ��� �ƴ�
	//		 p�� ���ؼ� �����ڸ� �ٽ� ȣ���ϴ� ǥ��


	//p.Point();  // �ɱ�� ? error.
	p.~Point(); // ok.


}




// malloc : �޸� �Ҵ�
// new    : ��ü ���� ( �޸� �Ҵ� + ������ ȣ�� )

// new Point : ���ο� �޸𸮿� ��ü�� ����� �޶�.
// new(&p) Point : �̹� �޸𸮰� �ִµ�, �� �޸𸮿� 
//						��ü�� ����� �޶�.

// ������ ���� �޸� �����
Queue* p = (Queue*)mmap(sizeof(Queue));

new(p) Queue;  // p �޸𸮿� Queue ��ü ����!!!
				// ������ ȣ��
// �����ڸ� 2�� ȣ�����ڴ� ���� �ƴ϶�..
// �޸� �Ҵ�� ������ ȣ���� �и����ڴ� ��!!!!!

