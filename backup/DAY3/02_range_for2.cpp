#include <iostream>
using namespace std;

struct Point3D
{
	int x, y, z;

	Point3D(int a = 0, int b = 0, int c = 0) : x(a), y(b), z(c) {}
};
// ����� ���� Ÿ���� range-for�� �������� �Ʒ� �Լ��� �ʿ��մϴ�.
// end() �Լ��� ������ ��� ���� �ּҸ� ��ȯ�ؾ� �մϴ�.
int* begin(Point3D& p) { return &(p.x); }
int* end(Point3D& p)   { return &(p.z) + 1; }

int main()
{
	Point3D p(1, 2, 3);

	for (auto n : p)  //?
		cout << n << endl;

	/*
	for (auto p1 = begin(p); p1 != end(p); ++p1)
	{
		int n = *p1;

	}
	*/
}