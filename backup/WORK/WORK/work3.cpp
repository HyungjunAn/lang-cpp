#include <iostream>
#include <type_traits>
using namespace std;

// 1. swap 사용하지 말고, 직접 교환하세요.
// 2. 배열의 크기를 구하는 C++ 표준 traits는 extent<> 입니다. 사용법은 cppreference.com 참고하세요.
// 3. Sort()알고리즘은 아무 알고리즘이나 사용하세요..

template<typename T> void Sort(T& arr)
{
	
}

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	Sort(x);

	for (auto& n : x)
		cout << n << endl;
}