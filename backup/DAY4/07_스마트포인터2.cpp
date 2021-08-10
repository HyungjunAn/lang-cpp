
#include <iostream>
using namespace std;

// PTR �����ؿ�����

// 1. ���ø����� �ؾ� �Ѵ�.
// 2. ���� ���� ������ �ذ��ؾ� �Ѵ�.
template<typename T> class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	~Ptr() { delete obj; }
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
};
int main()
{
	Ptr<int> p1 = new int;
	*p1 = 10;
	cout << *p1 << endl;

	Ptr<int> p2 = p1; // runtime error
}




