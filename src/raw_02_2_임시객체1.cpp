#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point()                         { cout << "~Point()" << endl; }
};
int main()
{
	//Point p(1, 2); // �̸� �ִ� ��ü.. ��({})�� ������ �ı� �ȴ�.
	
	//Point(1, 2); // �̸� ���� ��ü, �ӽð�ü(temporary object)
				  // ���� : �ڽ��� ������ ������ ��(;)

	Point(1, 2), cout << "X" << endl;

	cout << "---------" << endl;
}






