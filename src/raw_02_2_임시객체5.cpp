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

Point p(0, 0); 

//Point foo()  // 값 리턴 : 임시객체가 생성되어서 반환 된다.  
Point& foo()   // 참조리턴 : 임시객체를 만들지 말라는 의미.
{				//			단, 지역변수는 참조로 반환하면 안된다.
	return p;
}

int main()
{
	foo().x = 10; // ?

	cout << p.x << endl;

//	vector<int> v(10);
//	v[0] = 0; // v.operator[](0) = 0
}









