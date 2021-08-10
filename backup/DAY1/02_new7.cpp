#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) :x(a), y(b) {}
};

// STL vector를 생각해 봅시다.
template<typename T> class Vector
{
	T* buff;
	int size;
public:
	Vector(int sz, T value = T() ) : size(sz)
	{
		//buff = new T[sz];  // T 타입을 sz 만큼 할당.

		// 메모리만 할당
		buff = static_cast<T*>(operator new(sizeof(T)*sz));

		// 생성자 호출
		for (int i = 0; i < sz; i++)
		{
			//new( &buff[i] ) T; // 디폴트 생성자 호출
			new(&buff[i]) T(value); // 결국, Point pt(pt1)의 모양
		}							// 즉, 복사 생성자 호출

	}				// new Point; // 디폴트 생성자
};					// new Point(1,1); // 인자 2개 생성자
					// new Point(pt); 

int main()
{
	//Vector<int> v(10);
	Point pt(0, 0);
	Vector<Point> v(10, pt); // pt를 복사해서 만들라는 의미
}