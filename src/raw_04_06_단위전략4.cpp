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

	// STL 의 해쉬 함수
	hash<int> h;

	cout << h(10) << endl; // 10을 보관하기 위한 캐비넷 번호


	unordered_set<Point, PointHash, PointEqual> s2;

	s2.insert(Point(0, 0)); // Point 객체를 ___ 로 보내야 한다
	s2.insert(Point(1, 2));
}

// 카페(cafe.naver.com/cppmaster) 에 
// 단위전략4.cpp 올려놓았습니다 참고 하시면 됩니다