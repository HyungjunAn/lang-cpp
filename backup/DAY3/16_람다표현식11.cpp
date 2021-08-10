// 292 아래 부분
void foo( int(*f)(int, int) ) {} // 1. 함수 포인터
							// f 호출시 인라인 치환 안됨.

//void foo(auto f) {} // error. auto는 함수인자가 될수 없습니다.

//핵심 : 람다 표현식을 인자로 받을 때는 템플릿이 가장 좋습니다.
template<typename T> void foo(T f) {}  //2.    f 사용시 치환됨.

int main()
{
//	foo(3.3);
//	foo(3);
	foo( [](int a, int b) { return a + b; } );
	foo( [](int a, int b) { return a - b; } );
}