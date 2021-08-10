#include "cppmaster.h"

template<typename T> 
T square(T a)
{
	LOG_FUNCTION_NAME();
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
	short s = 3;
	//square(s);
	square<int>(s);
}
// 기계어 코드에는 square 함수가 __개 있습니다.