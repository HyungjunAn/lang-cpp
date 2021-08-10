//15_알고리즘의특징
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
// 313 ~

// 1. 멤버 함수가 아닌 일반 함수
// 2. 알고리즘함수(first, last)
// 3. <algorithm>, <numeric>, <memory>

// 4. 알고리즘은 컨테이너의 종류를 알지 못한다.
// 5. 알고리즘은 컨테이너의 크기를 줄이지 않는다.

int main()
{
	vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	// 314 page
	auto p = remove(begin(v), end(v), 3);

	for (auto& n : v)
		cout << n << " ";

	cout << endl;
	// 필요없는 요소를 제거하려면 해당 컨테이너의 멤버함수를
	// 사용해야 한다.
	v.erase(p, v.end());

	for (auto& n : v)
		cout << n << " ";
	
}