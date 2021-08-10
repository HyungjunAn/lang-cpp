
#include <iostream>
using namespace std;

template<typename T> class Ptr
{
	T* obj;
public:
	inline Ptr(T* p = 0) : obj(p) {}
	inline ~Ptr() { delete obj; }

	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }

	// 복사와 대입을 제공하지 않는다.
	Ptr(const Ptr&) = delete;
	void operator=(const Ptr&) = delete;

};
int main()
{
	Ptr<int> p1 = new int;
	Ptr<int> p2 = p1;   // compile error
}




