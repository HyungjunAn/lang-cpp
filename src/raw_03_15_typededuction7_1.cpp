// 222 page

/*
// C++11 �� ���ο� �Լ� ǥ���. ���� ��ȯ ǥ���
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

//auto Add(T1 a, T2 b)   // C++14 �� auto �� ǥ���ص� �ȴ�.

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