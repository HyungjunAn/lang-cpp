#include <iostream>
using namespace std;

// ���� : �Ϲ� �Լ� �����Ϳ� ��� �Լ� ������
// �ٽ� 1. �Ϲ� �Լ� �����Ϳ� ����Լ��� �ּҸ� ������ ����.
// �ٽ� 2. �Ϲ� �Լ� �����Ϳ� static ����Լ��� �ּҸ� ������ �ִ�. 
// �ٽ� 3. ��� �Լ� �����͸� ����� ����ϴ� ���
//        ���� 8page, �Ʒ� main �Լ� ����
class SomeClass
{
public:
	void goo(int a) {	cout << "SomeClass::goo" << endl; }
};
void foo(int a) { cout << "foo" << endl; }

int main()
{
	void(*f1)(int) = &foo;  // ok
	//void(*f2)(int) = &SomeClass::goo; // error, 
								// this�� �߰��Ǵ� �Լ�

	// 8page. ����Լ��� �ּҸ� ��� �Լ� ������ �����
	void(SomeClass::*f)(int) = &SomeClass::goo; // ok..

	f(0);// error. goo �� ��� �Լ� �̹Ƿ� ��ü(this) �� �־�� �Ѵ�.

	SomeClass sc;
	//sc.f(0); // error. f ��� ����� ã�� �ȴ�.

	//sc.*f(0); // .* : pointer to member ��� ������
				// error. ������ �켱���� ���� f(0)�� ���� ����
	(sc.*f)(0); // ok.
	// (psc->*f)(0)
}
