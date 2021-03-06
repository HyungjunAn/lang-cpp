#include <iostream>
using namespace std;

// step 4. 보다 generic 하게..

// 아래 처럼 만들면 2개의 문제가 있습니다.
// 1. 구간의 타입과 검색 대상타입이 연관됩니다.
//    double 배열에서 int 검색 안됨..

// 2. T* 로 하면 반드시  진짜 포인터만 사용해야 합니다.
//    스마트 포인터 안됩니다.
//template<typename T> T* xfind(T* first, T* last, T c)

template<typename T1, typename T2> 
T1 xfind(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? 0 : first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = xfind(x, x + 10, 5);

	if (p == 0)
		cout << "not found" << endl;
	else
		cout << *p << endl;
}
