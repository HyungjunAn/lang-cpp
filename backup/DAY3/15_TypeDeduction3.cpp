#include <iostream>
//#include <boost\\type_index.hpp>
using namespace std;
//using namespace boost;
//using namespace boost::typeindex;


// ��Ģ 2. ������ Ÿ���� ���� Ÿ���̸� �Լ� ���ڰ� ������ �ִ� ���� �Ӽ��� ���ŵȴ�.
//         const, volatile�� �����Ѵ�.
template<typename T> void foo(T& a)
{
	// C++ ǥ�� RTTI�� ����ؼ� Ÿ�� ���ϱ�.
	cout << typeid(T).name() << ", a : " << typeid(a).name() << endl;
}

int main()
{
	int n = 10;
	int&r = n;
	const int c = n;
	const int& cr = c;
	foo(n); // T : int   a : int&
	foo(r); // T : int   a : int&
	foo(c); // T : const int,  a : const int&
	foo(cr);// T : const int,  a : const int&

}
template<typename T> void foo(T&& a) {}




