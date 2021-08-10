
#include <iostream>
using namespace std;

// xfind 총정리
// 1. 검색 구간 : 모든 타입의 배열의 [first, last) 의 구간
//			     last 는 검색 대상 아님.

// 2. 구간의 표현 : 반드시 포인터 일 필요 없다. 
//					단, *, ==, !=, ++ 연산이 가능해야 한다.

// 3. 구간의 이동 : 전위형 ++

// 4. 실패의 반환 : last ( past the end 라고 부른다.)


template<typename InputIter, typename T>
InputIter xfind(InputIter first, InputIter last, const T& c)
{
	while (first != last && *first != c)
		++first;

	return first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = xfind(x, x + 10, 5);

	if (p == x + 10)
		cout << "not found" << endl;
	else
		cout << *p << endl;
}