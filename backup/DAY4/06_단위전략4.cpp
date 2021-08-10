#include <unordered_set>
#include <iostream>
using namespace std;

struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

struct PointHash
{
	inline bool operator()(const Point& p) const
	{
		hash<int> h;
		return h(p.x) + h(p.y);
	}
};

struct PointEqual
{
	inline bool operator()(const Point& p1, const Point& p2) const
	{
		return p1.x == p2.x && p1.y == p2.y;
	}
};

int main()
{
	unordered_set<int> s;    // hash

	s.insert(10);
	s.insert(20);

	// STL �� �ؽ� �Լ�
	hash<int> h;

	cout << h(10) << endl; // 10�� �����ϱ� ���� ĳ��� ��ȣ


	unordered_set<Point, PointHash, PointEqual> s2;

	s2.insert(Point(0, 0)); // Point ��ü�� ___ �� ������ �Ѵ�
	s2.insert(Point(1, 2));
}

// ī��(cafe.naver.com/cppmaster) �� 
// ��������4.cpp �÷����ҽ��ϴ� ���� �Ͻø� �˴ϴ�