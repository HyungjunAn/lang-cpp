#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	//vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	list<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = begin(v);

	// p를 5칸 전진하고 싶습니다. 제일 좋은 방법은 뭘까요 ?
	//p = p + 5;

	advance(p, 5);
}