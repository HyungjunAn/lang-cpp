// lazy instantiation - 90 page �߰�.

/*
class A
{
	int data;
public:
	void foo(int a) { *a = 0; } // error
};
*/

// ���ø����� ������� ���� �Լ�(����Լ�)�� C++ �ڵ�� �������� �ʴ´�.
// ���� �Լ��� C++ �ڵ�� �����ȴ�. - lazy instantiation
template<typename T> class A
{
	T data;
public:
	void foo(T a) { *a = 0; } 
};

int main()
{
	A<int> a;
	a.foo(0); 
}
