
#include <iostream>
#include <type_traits>
#include <cassert> 
using namespace std;

//#pragma pack(1)
struct PACKET
{
	char cmd;
	int  data;
};

static_assert(sizeof(PACKET) == sizeof(char) + sizeof(int),
					"error, unexpected padding");

template<typename T> void xmemset(T* p)
{
	// is_polymorphic<T>::value :  �����Լ��� �ִ��� �����ϴ� ���
	
	static_assert( ! is_polymorphic<T>::value,
		"error, T has virtual function");

	memset(p, 0, sizeof(T));
}

class A 
{
	int data;
	virtual void foo() {}
};

int main()
{
	cout << sizeof(PACKET) << endl; //?

	A a;
	xmemset(&a);
}









