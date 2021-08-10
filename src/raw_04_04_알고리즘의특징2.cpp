
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

// 알고리즘과 멤버함수에 동일한 이름의 함수가 있다면..
// 멤버 함수를 사용하자!

int main()
{
	//vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

//	auto p = remove(begin(v), end(v), 3);
//	v.erase(p, end(v));

	// list는 요소를 당기는 것보다는 조건에 맞는 요소를 만날때 마다.
	// 제거하는 것이 좋다.
	v.remove(3);

	for (auto& n : v)
		cout << n << " ";

}