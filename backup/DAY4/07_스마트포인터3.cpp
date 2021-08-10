// 2번 복사해오세요.

#include <iostream>
using namespace std;

// PTR 복사해오세요

// 1. 템플릿으로 해야 한다.
// 2. 얕은 복사 문제도 해결해야 한다.
template<typename T> class Ptr
{
	T* obj;
	int* ref;
public:
	Ptr(T* p = 0) : obj(p) 
	{
		ref = new int;
		*ref = 1;
	}

	Ptr(const Ptr& p)
	{
		// 모든 멤버를 얕은 복사
		obj = p.obj;
		ref = p.ref;

		// 참조계수 증가
		++(*ref); // 핵심!!!
	}


	~Ptr() 
	{
		if (--(*ref) == 0)
		{
			delete obj;
			delete ref;
		}
	}



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




