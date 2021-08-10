#include <iostream>
using namespace std;

// 173 page
class Point
{
public:
	int x, y;
	
	Point(int a, int b) : x(a), y(b) {}

	Point() : Point(0,0) // 위임 생성자 문법 c++11 추가    //: x(0), y(0)
	{
		Point(0, 0); // 생성자에서 다른 생성자 호출?
					// 생성자 호출이 아닌 별도의 임시객체 생성
	}
};

int main()
{
	Point p;

	cout << p.x << endl;
}




