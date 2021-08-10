// 2_반복자1
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	int s[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	//vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// 1. 반복자 타입
	list<int>::iterator p = s.begin();
	//auto p = s.begin();

	// 2. 반복자를 꺼내는 방법
	//auto p1 = s.begin();
	//auto p2 = s.end();

	// 멤버 함수 begin 보다 일반 함수 begin 이 좋다. - C++11
	auto p1 = begin(s);
	auto p2 = end(s);

	//int sz = s.size(); // 배열일때 사용할수 없다.
	int sz = size(s);

}





