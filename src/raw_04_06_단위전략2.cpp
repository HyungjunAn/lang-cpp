#include <iostream>
#include <set>
#include <functional> // less<>, greater<> 등의 함수 객체
using namespace std;


// set 의 비교 정책은 2개의 값을 비교할수 있는 
// 함수 객체( ()연산자를 재정의한 클래스)를 전달해야 합니다.

template<typename T> struct Greater
{
	inline bool operator()(T a, T b) const
	{
		return a > b;
	}
};


int main()
{
//	set<int, Greater<int> > s;  // Tree
	set<int, greater<int> > s;

	s.insert(20);
	s.insert(15);
	s.insert(25);
	s.insert(5);

	for (auto& n : s)
		cout << n << endl;
}
