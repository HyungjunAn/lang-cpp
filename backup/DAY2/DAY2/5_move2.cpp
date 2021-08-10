// move1 ���� �Ұ�.
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

	// ���� ����� ������ ���� ������
	Cat(const Cat& c)
	{
		// �޸� �Ҵ���.. �޸𸮸� ��°�� ����
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);

		cout << "Copy" << endl;
	}

	/*
	// Move(�̵�) ������
	Cat(Cat&& c) : name(c.name)
	{
		cout << "Move" << endl;
		//name = c.name; // ���� ����
		c.name = 0;    // �ڿ� ����
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
	Cat ret = foo(); // �� ������ ������..
	cout << "-----------" << endl;
	Cat c1("NABI");
	Cat c2 = c1;  // ?
}


// cafe.naver.com/cppmaster ���� work.zip �ٿ� �޾Ƶμ���..