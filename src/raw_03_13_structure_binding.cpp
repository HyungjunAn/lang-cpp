#include <iostream>
using namespace std;

struct Point
{
	int x = 0;
	int y = 0;
};
int main()
{
	Point p = { 1,2 };

	int x = p.x;
	int y = p.y;

	auto[a, _] = p;  // p의 각요소를 a,b에 담는다.
					 // 주의. 반드시 auto로 해야 한다.

	//int _ = 1;

	int x[3] = { 1,2,3 };

	auto& [x1, x2, x3] = x;
}
// C++17, structure binding 문법.