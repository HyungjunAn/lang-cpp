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
#ifdef __cplusplus     // ��� C++ �����Ϸ��� �� ��ũ�ΰ� ���ǵǾ�
	#define NULL 0		// �ֽ��ϴ�.
#else
	#define NULL  (void*)0
#endif
*/
	foo(NULL);
	goo(NULL); // void* => char* ���� �Ͻ��� ��ȯ �ʿ�
				// C��� ok,, C++ error

}