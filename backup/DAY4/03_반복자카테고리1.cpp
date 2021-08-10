#include <iostream>
#include <forward_list> // 싱글리스트
#include <list>
using namespace std;

// 305 page

int main()
{
	list<int>         ds = { 1,2,3,4 };
	forward_list<int> ss = { 1,2,3,4 };
	
	auto p1 = begin(ds);
	auto p2 = begin(ss);

	// 아래 코드를 잘 생각해 보세요
	++p1; // ok
	--p1; // ok
	++p2; // ok
	--p2; // error. 자료구조 특성상 한쪽으로만 이동가능하다.
}




// 반복자 카테고리
// 1. 입력 반복자 : 입력, ++

// 2. 출력 반복자 : 출력, ++

// 3. 전진형 반복자 : 입력, ++, multi pass       -> 싱글리스트 반복자

// 4. 양방향 반복자 : 입력, ++, --, multi pass    -> 더블리스트 반복자

// 5. 임의 접근 반복자 : 입력, ++, --, +, -, [], multi pass    ->연속된 메모리와 유사

// 6. continuous 반복자(C++11)	: multi pass, 연속된 메모리의 반복자 (vector의반복자)
