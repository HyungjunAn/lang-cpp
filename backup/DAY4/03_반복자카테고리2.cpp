// 4_반복자카테고리1
#include <iostream>
#include <forward_list> // 싱글리스트
#include <list>
#include <algorithm>
using namespace std;

// 반복자 카테고리
// 1. 입력 반복자 : 입력, ++
// 2. 출력 반복자 : 출력, ++
// 3. 전진형 반복자 : 입력, ++, multi pass       -> 싱글리스트 반복자
// 4. 양방향 반복자 : 입력, ++, --, multi pass    -> 더블리스트 반복자
// 5. 임의 접근 반복자 : 입력, ++, --, +, -, [], multi pass    ->연속된 메모리와 유사
// 6. continuous 반복자(C++11)	: multi pass, 연속된 메모리의 반복자 (vector의반복자)


int main()
{
	list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 왜 반복자 카테고리가 중요한가 ?
	auto p = find(begin(s), end(s), 5);  
					// find 함수의 1, 2번째 인자는 반복자 입니다.
					// 최소 요구 조건을 생각해 보세요
					// => 입력 반복자

	reverse(begin(s), end(s)); // => 양 방향

	sort(begin(s), end(s)); // 퀵소트 입니다. => 임의접근 반복자
	//------------------------------------------

	forward_list<int> fs = { 1,2,3 };
	reverse(fs.begin(), fs.end());  // error. 양방향 반복자가
							// 필요하다.



	list<int> ss = { 1,2,3 };
	sort(ss.begin(), ss.end());  // error.. 임의접근 반복자가
							// 필요하다.
	ss.sort();  // 퀵이 아닌 다른 알고리즘.


	vector<int> v = { 1,2,3 };
	v.sort(); // 이 멤버 함수가 있을까요 ?? 없다..
			  // 일반함수(알고리즘) sort()를 사용하면 된다.

	sort()  // https://en.cppreference.com/
}










