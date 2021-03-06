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
	}
};

int main()
{
	Cat c1("NABI");
	Cat c2 = c1;  // ?
}




/*
// 깊은 복사로 구현한 복사 생성자
Cat(const Cat& c)
{
	// 메모리 할당후.. 메모리를 통째로 복사
	name = new char[strlen(c.name) + 1];
	strcpy(name, c.name);
}
*/

