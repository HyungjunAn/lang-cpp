// 2�� �����ؿ�����.

#include <iostream>
using namespace std;

// PTR �����ؿ�����

// 1. ���ø����� �ؾ� �Ѵ�.
// 2. ���� ���� ������ �ذ��ؾ� �Ѵ�.
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
		// ��� ����� ���� ����
		obj = p.obj;
		ref = p.ref;

		// ������� ����
		++(*ref); // �ٽ�!!!
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




