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
		memcpy(resource, t.resource, sizeof(int)*100);
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

int main()
{
	Test t1;
	Test t2 = t1;
	t2 = t1;
}

