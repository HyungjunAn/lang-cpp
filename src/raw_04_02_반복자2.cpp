#include <iostream>
#include <vector>
#include <list>
using namespace std;

// 반복자 무효화
int main()
{
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = v.begin(); // begin(v)

	v.resize(20); // 이순간 미리 얻어둔 반복자는 무효화(invalidate)
				  // 됩니다. 사용하면 안됩니다.

	cout << *p << endl; // 사용해도 될까요 ??

}





