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

	People( string n) : name(n) {}
	~People() { cout << name << "�� �׾����ϴ�." << endl;}

	//People* bf; //best Friend
	shared_ptr<People> bf;
};
int main()
{
	shared_ptr<People> p1(new People("Kim"));
	shared_ptr<People> p2(new People("Lee"));

	p1->bf = p2;
	p2->bf = p1;
}




