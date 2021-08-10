
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

// 알고리즘의 4가지 변형 - 317 page

// 조건자 : bool 을 반환하는 함수. 알고리즘에 인자로 많이 사용된다.
// 단항 함수 : 인자가 한개인것
// 이항 함수 : 인자가 2개 인것

bool foo(int a) { return a % 3 != 0; }

int main()
{
	vector<int> v1 = { 1,2,3,1,2,3,1,2,3,1 };
	vector<int> v2(10, 0);

	//remove(begin(v1), end(v1), 3);

	//auto p = remove_copy(begin(v1), end(v1), begin(v2), 3);
	//v2.erase(p, end(v2));

	//remove_if(begin(v1), end(v1), foo );


	remove_copy_if(begin(v1), end(v1), begin(v2),  foo);


	for (auto& n : v1)	cout << n << " ";
	cout << endl;
	for (auto& n : v2) cout << n << " ";

	//아래 함수가 있을까요 ?
	//sort_copy(begin(v1), end(v1), begin(v2));
}






