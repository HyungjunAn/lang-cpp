#define USING_GUI
#include "cppmaster.h" // 이 헤더에서 몇몇 기능을 사용하려면
						// USING_GUI 필요
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

// 타이머를 사용하는 클래스 
#include <map>
class Clock; // 전방선언

map<int, Clock*> this_map;

class Clock
{
	string name;
public:
	Clock(string s) : name(s) {}

	void Start(int ms)
	{
		int id = ec_set_timer(ms, foo); // 타이머 설치

		// 자료구조에 this 보관
		this_map[id] = this;
	}

	// 핵심 1. C언어에서 이야기하는 callback 함수를 C++로 디자인하면
	//			반드시 static 멤버로  해야 합니다.
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
	c2.Start(1000); // 1초에 한번씩 이름 출력

	ec_process_message();
}