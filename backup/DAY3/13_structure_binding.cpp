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

	auto[a, _] = p;  // p�� ����Ҹ� a,b�� ��´�.
					 // ����. �ݵ�� auto�� �ؾ� �Ѵ�.

	//int _ = 1;

	int x[3] = { 1,2,3 };

	auto& [x1, x2, x3] = x;
}
// C++17, structure binding ����.