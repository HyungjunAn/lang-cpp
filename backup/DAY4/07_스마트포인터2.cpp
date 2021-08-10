
#include <iostream>
using namespace std;

// PTR 복사해오세요

// 1. 템플릿으로 해야 한다.
// 2. 얕은 복사 문제도 해결해야 한다.
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




