// 교재 제출하신 분께는 답변 메일 드렸습니다
// 답변 메일 받지 못하신 분은 이야기 해 주세요..

#include <iostream>
#include <string>
#include <memory>
using namespace std;

// 335 page 
struct People
{
	string name;

	People(string n) : name(n) {}
	~People() { cout << name << "이 죽었습니다." << endl; }

	People* bf; // raw pointer 는 참조계수와는 관계없다.
				// 하지만 대상 객체가 파괴 된 사실을 조사할수 없다.

	//shared_ptr<People> bf;
};
int main()
{
	shared_ptr<People> p1(new People("Kim"));
	{
		shared_ptr<People> p2(new People("Lee"));

		p1->bf = p2.get();
		p2->bf = p1.get();
	}

	if (p1->bf != nullptr)
	{
		cout << p1->bf->name << endl;
	}

}




