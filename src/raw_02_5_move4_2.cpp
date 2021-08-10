// 5_move4_1.cpp
#include <iostream>
#include <string>
using namespace std;

// move 생성자 를 구현해 봅시다. - 251
// Rule Of 3
//  생성자가 자원 할당하면 3개의 함수를 만들어야 한다.
//  소멸자, 복사 생성자, 대입연산자

// Rule Of 5  => C++11 부터는 Move 생성자, Move 대입 추가

class Test
{
	int* resource;
	string name;
public:
	Test() { resource = new int[100]; }
	~Test() { delete[] resource; }

	// 깊은 복사
	Test(const Test& t)
	{
		cout << "복사 생성자" << endl;

		resource = new int[100];
		memcpy(resource, t.resource, sizeof(int) * 100);
		name = t.name;
	}

	// 대입 연산자
	Test& operator=(const Test& t)
	{
		cout << "복사 대입 연산자" << endl;
		delete[] resource; // 자신의 자원을 지우고, 깊은복사

		resource = new int[100];
		memcpy(resource, t.resource, sizeof(int) * 100);
		name = t.name;

		return *this;
	}

	Test(Test&& t)
	{
		cout << "Move 생성자" << endl;

		resource = t.resource;
		t.resource = 0;

		name = move(t.name); // move  생성자는 모든 멤버를 move로이동
	}

	// 대입 연산자
	Test& operator=(Test&& t)
	{
		cout << "move 대입 연산자" << endl;
		delete[] resource; // 자신의 자원을 지우고, 깊은복사

		resource = t.resource;
		t.resource = 0;
		name = move(t.name); // move  생성자는 모든 멤버를 move로이동


		return *this;
	}
};
// 멤버인 Test는 자원 할당을 하지만
// Object 자체는 동적 자원할당은 없습니다.
// 사용자가 copy, move 모두 만들지 않으면 컴파일러가 모두 제공
// 사용자가 copy를 만들면 컴파일러는 move를 지원하지 못한다.
class Object
{
	Test t;
public:
	Object() {}

	Object(const Object& o) : t(o.t) 
	{ 
		cout << "Object copy" << endl;
	}
};

int main()
{
	Object o1;
	Object o2 = o1;
	Object o3 = move(o1);
}

