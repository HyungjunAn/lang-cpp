#include <iostream>
using namespace std;

// 가변인자 템플릿을 사용한 C++11 표준인 튜플 만들기..145

template<typename ... Types> struct xtuple
{
	static constexpr int N = 0;  // 보관하는 요소의 갯수
};

int main()
{
	xtuple<int, double, short> t3;


//	vector<int> v(3);
}
