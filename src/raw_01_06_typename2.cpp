#include <iostream>
using namespace std;

class AAA
{
public:
	enum { value = 10};
	typedef int DWORD;
};
int p = 0;

template<typename T> void foo(T a)
{
	// �����Ϸ��� �Ʒ� �ڵ带 ��� �ؼ��ؾ� �ұ�� ?
	// T::�ɺ�  =>  �ɺ��� ������ ������ �ؼ�
	// T::DWORD * p;  // error

	typename T::DWORD * p; // DWORD�� Ÿ������ �ؼ��� �޶�� �ǹ�.
				// ���ø��� ���������� Ÿ���� �������� typename�� �ʿ��ϴ�.
}

int main()
{
	AAA aaa;
	foo(aaa);
}