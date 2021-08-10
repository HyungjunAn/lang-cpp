#include <iostream>
#include <functional>
#include <vector>
using namespace std;

// 알고리즘 : STL 이 제공하는 멤버 함수가 아닌 일반함수를 나타내는 용어
#include <algorithm>

int main()
{
	vector<int> v = { 1,2,6,4,5,3,7,8,9,10 };

	// find : 값을 검색하는 함수
	auto p = find(begin(v), end(v), 3);



	cout << *p2 << endl; // 6
}





