// 222 page

/*
// C++11 의 새로운 함수 표기법. 후위 반환 표기법
auto square(int a) -> int
{
	return a * a;
}

int main()
{
	square(3);
}
*/

template<typename T1, typename T2>
//decltype(a + b)  Add(T1 a, T2 b)

//auto Add(T1 a, T2 b) -> decltype(a + b)  // ok.. C++11

//auto Add(T1 a, T2 b)   // C++14 는 auto 만 표기해도 된다.

decltype(auto) Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	Add(1.5, 2);


//	a = 10;
//	int a;

}