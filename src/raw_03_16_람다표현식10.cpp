#include <iostream>
#include <functional>
using namespace std;

// 람다표현식을 담는 변수 - 292page


int main()
{
	auto f1           = [](int a, int b) { return a + b; };

	// 람다 표현식은 임시객체 입니다
	// 람다표현식이 만드는 임시객체는 함수포인터로 암시적 변환됩니다.
	int(*f2)(int, int) = [](int a, int b) { return a + b; };


	// 아래 코드들의 인라인 치환성을 생각해 보세요
	f1(1, 2); //  인라인 치환 됨.
	f2(1, 2); //  치환 안됨.
//	f3(1, 2); //  치환 안됨.
}








