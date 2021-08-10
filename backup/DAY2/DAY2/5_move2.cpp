// move1 복사 할것.
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

// 248 page

class Cat
{
	char* name;
public:
	Cat(const char* s)
	{
		name = new char[strlen(s) + 1];
		strcpy(name, s);
	}
	~Cat() { delete[] name; }

	// 깊은 복사로 구현한 복사 생성자
	Cat(const Cat& c)
	{
		// 메모리 할당후.. 메모리를 통째로 복사
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);

		cout << "Copy" << endl;
	}

	/*
	// Move(이동) 생성자
	Cat(Cat&& c) : name(c.name)
	{
		cout << "Move" << endl;
		//name = c.name; // 얕은 복사
		c.name = 0;    // 자원 포기
	}
	*/
};

Cat foo()
{
	Cat c("AAA");
	return c;
}

int main()
{
	cout << "-----------" << endl;
	Cat ret = foo(); // 잘 생각해 보세요..
	cout << "-----------" << endl;
	Cat c1("NABI");
	Cat c2 = c1;  // ?
}


// cafe.naver.com/cppmaster 에서 work.zip 다운 받아두세요..