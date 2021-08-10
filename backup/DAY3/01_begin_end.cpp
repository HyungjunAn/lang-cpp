// cafe.naver.com/cppmaster 에서 3일차 사전소스 받으시면 됩니다.
// 출석체크(QR) 해주세요.











#include <iostream>
#include <vector>
#include <list>
using namespace std;

// 반복자 : 컨테이너의 요소를 가리키는 포인터 같이 동작하는 객체
// 165 page
int main()
{
	//vector<int> v = { 1,2,3,4,5 };
	//list<int> v = { 1,2,3,4,5 };
	int v[5] = { 1,2,3,4,5 };

	// C++98/03 스타일
//	vector<int>::iterator p1 = v.begin();
//	vector<int>::iterator p2 = v.end();

	// C++11 에서 반복자를 꺼내는 코드.
	auto p1 = begin(v);  

	//auto sz = v.size();
	auto sz = size(v);
	// p1은 v의 첫번째 요소를 가리키는 반복자(포인터 유사객체)입니다.
	cout << *p1 << endl; // 1
}