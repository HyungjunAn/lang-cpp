#include <string>
#include <iostream>
using namespace std;

// ����. move ���� Ŭ���� �����

class People
{
	string name;
	string addr;
	int    age;
public:
	People(string n, string add, int a) : name(n), addr(add), age(a) {}

	// ���� ������, ���Կ�����, Move ������, Move ���Կ����ڸ� ���弼��..
	// ���� ���θ� Ȯ���ϱ� ���� logging ���ּ���
};

int main()
{
	People p1( "ȫ�浿", "����", 20 );
	People p2 = p1;       // copy
	People p3 = move(p1); // move
}
