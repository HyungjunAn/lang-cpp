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
	}
};

int main()
{
	Cat c1("NABI");
	Cat c2 = c1;  // ?
}




/*
// ���� ����� ������ ���� ������
Cat(const Cat& c)
{
	// �޸� �Ҵ���.. �޸𸮸� ��°�� ����
	name = new char[strlen(c.name) + 1];
	strcpy(name, c.name);
}
*/

