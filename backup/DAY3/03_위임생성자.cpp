#include <iostream>
using namespace std;

// 173 page
class Point
{
public:
	int x, y;
	
	Point(int a, int b) : x(a), y(b) {}

	Point() : Point(0,0) // ���� ������ ���� c++11 �߰�    //: x(0), y(0)
	{
		Point(0, 0); // �����ڿ��� �ٸ� ������ ȣ��?
					// ������ ȣ���� �ƴ� ������ �ӽð�ü ����
	}
};

int main()
{
	Point p;

	cout << p.x << endl;
}




