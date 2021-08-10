
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
	weak_ptr<Car> wp;     // ������� ���� ����
	shared_ptr<Car> sp;   // ������� ����
	//{
		shared_ptr<Car> p(new Car);

		//sp = p;
		wp = p;
		cout << p.use_count() << endl;
	//}

	if (wp.expired())
	{
		cout << "��ü �ı���." << endl;
	}
	else
	{
		cout << "��ü �ı� �ȵ�." << endl;

		// ��ü�� ��� �����Ƿ� ���� �ص� �ȴ�.
		//wp->Go(); // error.. weak_ptr�� -> ������ �������Ѵ�.

		// ��ü�� �����Ϸ��� wp�� ������ shared_ptr�� �����ؾ� �Ѵ�.
		shared_ptr<Car> sp2 = wp.lock(); //  ��������� ����

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
	~People() { cout << name << "�� �׾����ϴ�." << endl; }

	weak_ptr<People> bf;

	//People* bf; // raw pointer �� ��������ʹ� �������.
				// ������ ��� ��ü�� �ı� �� ����� �����Ҽ� ����.

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
		cout << "��ü �ı���." << endl;

}





