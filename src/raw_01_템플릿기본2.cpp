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
// ���� �ڵ忡�� square �Լ��� __�� �ֽ��ϴ�.