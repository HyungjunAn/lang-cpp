#include <iostream>
#include <vector>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) {}

	// �����Ϸ��� �ڵ������ϴ� �Լ��� ������ ���ϰ� �Ϸ���
	// delete �ϸ� �ȴ�.
	Point(const Point& p) = delete;

	//Point() {}
	Point() = default; // ����Ʈ �����ڸ� �����Ϸ��� �����
						// �޶�� �ǹ� - 190 page
};

int main()
{
	Point p1(1, 2);  // ok.. 
	//Point p1 = p2;   // ���� ������. ���������Ƿ� error 

	Point p3;
}



