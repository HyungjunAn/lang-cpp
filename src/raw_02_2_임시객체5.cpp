#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }

	Point(const Point& p) { cout << "copy ctor" << endl; }
};

Point p(0, 0); 

//Point foo()  // �� ���� : �ӽð�ü�� �����Ǿ ��ȯ �ȴ�.  
Point& foo()   // �������� : �ӽð�ü�� ������ ����� �ǹ�.
{				//			��, ���������� ������ ��ȯ�ϸ� �ȵȴ�.
	return p;
}

int main()
{
	foo().x = 10; // ?

	cout << p.x << endl;

//	vector<int> v(10);
//	v[0] = 0; // v.operator[](0) = 0
}









