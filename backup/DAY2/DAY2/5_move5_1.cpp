#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) {}
};

int main()
{
	//Point* buff1 = new Point[5];

	Point* buff1 = static_cast<Point*>(
		operator new(sizeof(Point) * 5));

	for (int i = 0; i < 5; i++)
		new( &buff[i] ) Point(0, 0);

	// 버퍼를 키워 봅시다.
	// 1. 새로운 버퍼는 먼저 메모리만 할당 합니다.

	Point* buff2 = static_cast<Point*>(
		operator new(sizeof(Point) * 10));

	// 작은 버퍼의 내용을 새로운 버퍼로 이동합니다.
	for (int i = 0; i < 5; i++)
	{
		//buff2[i] = buff1[i]; // 대입연산자
							// buff2는 아직 생성이 안된 객체이다.

		//new (&buff2[i]) Point( buff[i] ); // 복사 생성자 호출
		
		//new (&buff2[i]) Point(move(buff[i])); // move생성자호출

		new (&buff2[i]) Point(move_if_noexcept(buff[i]));
	}
	// 새로운 요소의 생성자 호출.
	for (int i = 5; i < 10; i++)
	{
		new(&buff2[i]) Point(0, 0);
	}

	// 기존 버퍼에 객체 소멸자 호출후 메모리 해지
	for (int i = 0; i < 5; i++)
		buff1[i].~Point();
	operator delete(buff1);

	// 새로운 버퍼 주소를 buff1 으로 이동
	buff1 = buff2;

	// 버퍼 사용후. 각 객체의 소멸자 호출후 메모리 해지.
	for (int i = 0; i < 10; i++)
		buff1[i].~Point();
	operator delete(buff1);
}

// cafe.naver.com/cppmaster   work.zip 받으세요.