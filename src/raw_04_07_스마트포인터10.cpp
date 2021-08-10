
#include <iostream>
#include <string>
#include <memory>
using namespace std;

/*
struct Car
{
	void Go() { cout << "CarGo" << endl; }
};

int main()
{
	weak_ptr<Car> wp;     // 참조계수 증가 안함
	shared_ptr<Car> sp;   // 참조계수 증가
	//{
		shared_ptr<Car> p(new Car);

		//sp = p;
		wp = p;
		cout << p.use_count() << endl;
	//}

	if (wp.expired())
	{
		cout << "객체 파괴됨." << endl;
	}
	else
	{
		cout << "객체 파괴 안됨." << endl;

		// 객체가 살아 있으므로 접근 해도 된다.
		//wp->Go(); // error.. weak_ptr은 -> 연산자 지원안한다.

		// 객체에 접근하려면 wp를 가지고 shared_ptr을 생성해야 한다.
		shared_ptr<Car> sp2 = wp.lock(); //  참조계수도 증가

		if ( sp2 )
			sp2->Go();
	}
}

*/




// 335 page 
struct People
{
	string name;

	People(string n) : name(n) {}
	~People() { cout << name << "이 죽었습니다." << endl; }

	weak_ptr<People> bf;

	//People* bf; // raw pointer 는 참조계수와는 관계없다.
				// 하지만 대상 객체가 파괴 된 사실을 조사할수 없다.

	//shared_ptr<People> bf;
};
int main()
{
	shared_ptr<People> p1(new People("Kim"));
	{
		shared_ptr<People> p2(new People("Lee"));

		p1->bf = p2;
		p2->bf = p1;
	}

	shared_ptr<People> sp = p1->bf.lock();

	if (sp)
	{
		cout << sp->name << endl;
	}
	else
		cout << "객체 파괴됨." << endl;

}





