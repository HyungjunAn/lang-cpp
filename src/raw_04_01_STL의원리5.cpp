#include <iostream>
using namespace std;

// step 5. 반환값
//        [first, last) 구간의 검색 실패시 0 대신
//			last 반환..

template<typename T1, typename T2>
T1 xfind(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first;// == last;? 0 : first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = xfind(x, x + 10, 5);

	if (p == x+10)
		cout << "not found" << endl;
	else
		cout << *p << endl;
}
