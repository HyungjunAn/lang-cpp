// ���� �����Ͻ� �в��� �亯 ���� ��Ƚ��ϴ�
// �亯 ���� ���� ���Ͻ� ���� �̾߱� �� �ּ���..

#include <iostream>
#include <string>
#include <memory>
using namespace std;

// 335 page 
struct People
{
	string name;

	People(string n) : name(n) {}
	~People() { cout << name << "�� �׾����ϴ�." << endl; }

	People* bf; // raw pointer �� ��������ʹ� �������.
				// ������ ��� ��ü�� �ı� �� ����� �����Ҽ� ����.

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




