#include <vector>
#include <memory>
#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) { cout << "Point()" << endl; }
	~Point()						         { cout << "~Point()" << endl; }

	Point(const Point& p) { cout << "copy ctor" << endl; }
};

int main()
{
	vector<Point> v;

	// vector�� ��ҳֱ� 1.
	//Point p(1, 2);
	//v.push_back(p);

	// 2. �ӽð�ü�� ����ؼ� �ֱ�
	//v.push_back(Point(1, 2));

	// 3. push_xxx ��� emplace_xxx �� �������.
	v.emplace_back(1, 2);  // vector�� ����������
						// 1,2 �� ������
						// new Point(1,2) �� �����ؼ� ���ۿ�����

	cout << "---------" << endl;

}

// google ����
// github webkit �˻��� ������

// 1��° ��ũ ����, webkit/source/wtf/wtf/scope.h �������


// "C++ IDioms" �˻��� 1��° ��ũ
