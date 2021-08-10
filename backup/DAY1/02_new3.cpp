#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point()  { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }
};

// 아래 코드가 어렵습니다. 잘생각해 보세요
// 아래 함수가 모든 타입에 대해 생성자를 명시적으로 호출하기 위한
// 함수 입니다.
// placement new 라는 기술입니다
/*
// 아래 함수가 C++표준(C++98/03) 에있습니다.
void* operator new(size_t sz, void* p)
{
	return p;
}
*/


int main()
{
	Point p;

	//new Point; // 인자가 한개인 operator new() 사용.
	new( &p ) Point; // 인자가 2개인 위에 있는 operator new() 사용.
	// 결국 . 위 표현은 메모리 할당이 아닌
	//		 p에 대해서 생성자만 다시 호출하는 표현


	//p.Point();  // 될까요 ? error.
	p.~Point(); // ok.


}




// malloc : 메모리 할당
// new    : 객체 생성 ( 메모리 할당 + 생성자 호출 )

// new Point : 새로운 메모리에 객체를 만들어 달라.
// new(&p) Point : 이미 메모리가 있는데, 그 메모리에 
//						객체를 만들어 달라.

// 리눅스 공유 메모리 만들기
Queue* p = (Queue*)mmap(sizeof(Queue));

new(p) Queue;  // p 메모리에 Queue 객체 생성!!!
				// 생성자 호출
// 생성자를 2번 호출하자는 것이 아니라..
// 메모리 할당과 생성자 호출을 분리하자는 것!!!!!

