// 다음 코드를 컴파일 하면 에러가 있을까요 ? 없을까요 ?
template<typename T> void foo_imp(T a, int n)
{
	*a = 10;
}
template<typename T> void foo_imp(T a, double d)
{
}
// /std:c++latest
// g++ 소스이름.cpp -std=c++17

template<typename T> void foo(T a)
{
//	if (false)
	if constexpr( false )  // 컴파일 시간 if 문 - C++17  200page.
		foo_imp(a, 3);		 
	else
		foo_imp(a, 3.3);
}
int main()
{
	int n = 30;
	foo(n);
}