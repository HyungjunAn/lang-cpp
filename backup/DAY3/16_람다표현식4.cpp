#include <iostream>
using namespace std;


// 278 page
// �Լ� ��ü : �Լ�ó�� ()�� ����ؼ� ȣ�� ������ ��ü
struct Plus
{
	int operator()(int a, int b) const
	{
		return a + b;
	}
};
int main()
{
	Plus p;

	int n = p(1, 2); // p.operator()(1,2)

	cout << n << endl;

	// a + b; // a.operator+ (b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1,2)
}



