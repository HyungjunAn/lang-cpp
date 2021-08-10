// cafe.naver.com/cppmaster 에서
// 2일차 사전소스 받으시면 됩니다.














#include <iostream>
using namespace std;
// 16 page
class Point
{
public:
	int x = 0, y = 0;

	void set(int a, int b) { x = a; y = b; }

	void print()  const  // 상수 멤버 함수
	{
		//x = 100; // error.  상수 멤버 함수 안에서는 
				  // 모든 멤버는 상수 취급 된다.
		cout << x << " ," << y << endl; // ok..
	}
};

int main()
{
	const Point pt;  // 상수 객체

	pt.x = 10;		// error. public 에 있지만 상수객체 이므로
	pt.set(10, 20); // error. 
	pt.print();     // error.
			// 호출 가능하게 하려면 print()를 상수 멤버함수로 
			// 해야 한다

		// 핵심 "상수객체는 상수 멤버함수만 호출가능하다." - 17page

}


