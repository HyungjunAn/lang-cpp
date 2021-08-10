
#include <iostream>
using namespace std;

// C++11 :  복사 생성자와 Move 생성자를 모두 만들어 사용하자.

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


	Cat(const Cat& c)
	{
		cout << "복사 생성자" << endl;
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}
	Cat(Cat&& c)
	{
		cout << "Move 생성자" << endl;
		name = c.name;
		c.name = 0;
	}
};

int main()
{
	Cat c1("NABI");
	Cat c2 = c1; // 복사 생성자
	Cat c3 = static_cast<Cat&&>(c1); // Move 생성자
	Cat c4 = move(c2);  // 위처럼 캐스팅하는 함수 - 249 page

}





