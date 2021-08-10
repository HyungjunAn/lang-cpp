#include <iostream>
using namespace std;

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }

	Point(const Point& p) { cout << "copy ctor" << endl; }
};

// �ӽð�ü�� �Լ� ����   231page

//  g++ : -fno-elide-constructors
Point foo()
{
	// NRVO( Named RVO) : �̸� �ִ� ��ü�� �����Ϸ��� ����ȭ ���ش�.
	//				       
//	Point p(1, 2);
//	return p;  

	//  ����� �����ϴ� �� ���ٴ� ����鼭 �����ϴ� ���� ����.
	// ���ϰ� ��ü�� �ӽð�ü��
	// RVO(Return Value Optimization)  �̶�� ���
	return Point(1, 2); //  ���Ͽ� �ӽð�ü
					// ���� : �Լ� �� ȣ���ϴ� ������ ��
}

int main()
{
	Point p1(0, 0);

	p1 = foo();

	cout << "---------" << endl;
}









