
#include <iostream>
using namespace std;

// C++11 :  ���� �����ڿ� Move �����ڸ� ��� ����� �������.

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
		cout << "���� ������" << endl;
		name = new char[strlen(c.name) + 1];
		strcpy(name, c.name);
	}
	Cat(Cat&& c)
	{
		cout << "Move ������" << endl;
		name = c.name;
		c.name = 0;
	}
};

int main()
{
	Cat c1("NABI");
	Cat c2 = c1; // ���� ������
	Cat c3 = static_cast<Cat&&>(c1); // Move ������
	Cat c4 = move(c2);  // ��ó�� ĳ�����ϴ� �Լ� - 249 page

}





