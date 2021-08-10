// 323.  allocator개념
/*
template<typename T, typename Alloc = allocator<T> > class vector
{
	T* buff;
	int size;
	Alloc ax; // 메모리 할당기
public:
	void resize(int newsize)
	{
		if (newsize > size)
		{
			// 메모리 재할당이 필요 합니다. 어떻게 할까요 ?
			// new, malloc, linux system call, windows api,
			// pooling 등..
			buff = ax.allocate(newsize);

			// 메모리 제거하려면
			ax.deallocate(buff);
		}
	}
};

*/
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	//vector<

	allocator<int> ax; // C++ 표준 메모리 할당기

	int* p = ax.allocate(10); // operator new(sizeof(int)*10);

	for ( int i = 0 ; i< 10; i++)
		ax.construct(&p[i]);   // 생성자 호출

	for (int i = 0; i < 10; i++)
		ax.destroy(&p[i]);   // 소멸자 호출
	
	ax.deallocate(p, 10); // operator delete(p)

	// 사용자 정의 allocator를 만드려면
	// 반드시 지켜야 하는 규칙이 있다.
	// 단위 전략에서 "정책클래스"는 꼭 지켜야 하는 규칙이 있다.
	// cppreferece.com 에서 allocator 찾아 보세요.

	vector<int, MyAlloc<int> > v;
	v.resize(10);
}
