#include <iostream>
using namespace std;

// 74page

// type traits : T이 다양한 속성을 조사하는 기술. - 75 p. 제일위줄.

template<typename T> void printv(T a)
{
	if ( T 가 포인터 타입이면 )
		cout << a << " : " << *a << endl;
	else
		cout << a << endl;
}

int main()
{
	int    n = 10;
	double d = 3.3;

	printv(n);
	printv(d);
	printv(&n);
}





