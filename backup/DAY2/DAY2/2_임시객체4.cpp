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

// 임시객체와 함수 리턴   231page

//  g++ : -fno-elide-constructors
Point foo()
{
	// NRVO( Named RVO) : 이름 있는 객체도 컴파일러가 최적화 해준다.
	//				       
//	Point p(1, 2);
//	return p;  

	//  만들고 리턴하는 것 보다는 만들면서 리턴하는 것이 좋다.
	// 리턴값 자체를 임시객체로
	// RVO(Return Value Optimization)  이라는 기술
	return Point(1, 2); //  리턴용 임시객체
					// 수명 : 함수 를 호출하는 문장의 끝
}

int main()
{
	Point p1(0, 0);

	p1 = foo();

	cout << "---------" << endl;
}









