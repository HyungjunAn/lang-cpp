#include <iostream>
using namespace std;

void foo(int   n) { cout << "int" << endl; }   // 1
void foo(void* p) { cout << "void*" << endl; } // 2
void goo(char* p) { cout << "goo" << endl; } // 3

int main()
{
	foo(0);  // 1
	foo((void*)0); // 2
/*
#ifdef __cplusplus     // 모든 C++ 컴파일러는 이 매크로가 정의되어
	#define NULL 0		// 있습니다.
#else
	#define NULL  (void*)0
#endif
*/
	foo(NULL);
	goo(NULL); // void* => char* 로의 암시적 변환 필요
				// C언어 ok,, C++ error

}