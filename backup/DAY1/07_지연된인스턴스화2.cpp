// ���� �ڵ带 ������ �ϸ� ������ ������� ? ������� ?
template<typename T> void foo_imp(T a, int n)
{
	*a = 10;
}
template<typename T> void foo_imp(T a, double d)
{
}
// /std:c++latest
// g++ �ҽ��̸�.cpp -std=c++17

template<typename T> void foo(T a)
{
//	if (false)
	if constexpr( false )  // ������ �ð� if �� - C++17  200page.
		foo_imp(a, 3);		 
	else
		foo_imp(a, 3.3);
}
int main()
{
	int n = 30;
	foo(n);
}