#include <iostream>
#include <vector>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) {}
};

int main()
{
	Point p1(1, 2);
	Point p2;

	Point p3 = p2;
}



