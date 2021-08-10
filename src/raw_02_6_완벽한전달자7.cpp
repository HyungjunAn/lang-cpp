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

	// vector에 요소넣기 1.
	//Point p(1, 2);
	//v.push_back(p);

	// 2. 임시객체를 사용해서 넣기
	//v.push_back(Point(1, 2));

	// 3. push_xxx 대신 emplace_xxx 를 사용하자.
	v.emplace_back(1, 2);  // vector가 내부적으로
						// 1,2 를 가지고
						// new Point(1,2) 로 생성해서 버퍼에보관

	cout << "---------" << endl;

}

// google 에서
// github webkit 검색해 보세요

// 1번째 링크 선택, webkit/source/wtf/wtf/scope.h 열어보세요


// "C++ IDioms" 검색후 1번째 링크
