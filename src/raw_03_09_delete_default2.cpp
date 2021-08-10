#include <iostream>
#include <vector>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) {}

	// 컴파일러가 자동생성하는 함수를 만들지 못하게 하려면
	// delete 하면 된다.
	Point(const Point& p) = delete;

	//Point() {}
	Point() = default; // 디폴트 생성자를 컴파일러가 만들어
						// 달라는 의미 - 190 page
};

int main()
{
	Point p1(1, 2);  // ok.. 
	//Point p1 = p2;   // 복사 생성자. 삭제했으므로 error 

	Point p3;
}



