// lazy instantiation - 90 page 중간.

/*
class A
{
	int data;
public:
	void foo(int a) { *a = 0; } // error
};
*/

// 템플릿에서 사용하지 않은 함수(멤버함수)는 C++ 코드로 생성되지 않는다.
// 사용된 함수만 C++ 코드로 생성된다. - lazy instantiation
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
