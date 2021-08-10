#define USING_GUI
#include "cppmaster.h" // �� ������� ��� ����� ����Ϸ���
						// USING_GUI �ʿ�
#include <iostream>
#include <string>
using namespace std;

/*
void foo(int id)
{
	cout << "foo : " << id << endl;
}

int main()
{
	int n1 = ec_set_timer(500,  foo);
	int n2 = ec_set_timer(1000, foo);

	ec_process_message();
}
*/

// Ÿ�̸Ӹ� ����ϴ� Ŭ���� 
#include <map>
class Clock; // ���漱��

map<int, Clock*> this_map;

class Clock
{
	string name;
public:
	Clock(string s) : name(s) {}

	void Start(int ms)
	{
		int id = ec_set_timer(ms, foo); // Ÿ�̸� ��ġ

		// �ڷᱸ���� this ����
		this_map[id] = this;
	}

	// �ٽ� 1. C���� �̾߱��ϴ� callback �Լ��� C++�� �������ϸ�
	//			�ݵ�� static �����  �ؾ� �մϴ�.
	static void foo(int id)
	{
		//cout << name << endl; // this->name

		Clock* self = this_map[id];
		cout << self->name << endl;
	}

};


int main()
{
	Clock c1("A");
	Clock c2("\tB");
	c1.Start(500);
	c2.Start(1000); // 1�ʿ� �ѹ��� �̸� ���

	ec_process_message();
}