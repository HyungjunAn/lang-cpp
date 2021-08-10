#include <iostream>
using namespace std;

// new가 메모리할당할때 사용하는 operator new()는 재정의 가능합니다.
void* operator new( size_t sz)
{
	cout << "my new : " << sz << endl;
	return malloc(sz);
}
// operator new() 함수는 여러개 만들수 있습니다.
// 단, 1번째 인자는 반드시 size_t가 되어야 합니다.
void* operator new(size_t sz, const char* s, int n)
{
	cout << "my new2 : " << sz << endl;
	return malloc(sz);
}

void operator delete(void* p)
{
	free(p);
}
int main()
{
	//int* p1 = new int; 

	int* p1 = new("AA", 5) int; // 인자가 3개인
						// operator new()사용

	delete p1;         
}




