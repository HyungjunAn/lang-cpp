#include <iostream>
using namespace std;

int x = 10;

class Test
{
public:
	int a = 0; // member initializer
	int b = ++x;

	// 주의 : 생성자에서 초기화 리스트로 초기화 하는 멤버는
	//		  member initiaizer가 실행되지 않는다.
	Test() {}
	Test(int v) : b(v) {}
};

int main()
{
	Test t1;
	Test t2(3);

	cout << x << endl; // ???
}