#include <algorithm>
using namespace std;

// 285 page 
// cmp1, cmp2, Less, Greater 복사 해오세요
inline bool cmp1(int a, int b) { return a < b; }
inline bool cmp2(int a, int b) { return a > b; }
struct Less    { inline bool operator()(int a, int b) { return a < b; } };
struct Greater { inline bool operator()(int a, int b) { return a > b; } };

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// C++표준함수로 sort가 있습니다.
	sort(x, x + 10);  // 기본 동작은 오름 차순

	// STL의 sort()의 모든 인자는 template 입니다.

	// 1. 비교 정책으로 일반함수를 사용할때
	// 장점 : 정책을 교체해도 sort 함수는 한개이다. 코드메모리 증가안함.
	// 단점 : 정책함수가 인라인 치환될수 없다. 느리다.
	sort(x, x+10, cmp1);//sort(int*,int*,bool(*)(int,int)) 인 함수생성
	sort(x, x+10, cmp2);//sort(int*,int*,bool(*)(int,int)) 인 함수생성




	// 2. 비교 정책으로 함수객체를 사용할때
	// 장점 : 정책 함수가 인라인 치환된다 빠르다.
	// 단점 : 정책을 교체한 횟수 만큼의 sort() 기계어 생성. 
	//        코드 메모리증가
	Less    f1;
	Greater f2;
	sort(x, x+10, f1);// sort(int*, int*, Less) 인 함수 생성
	sort(x, x+10, f2);// sort(int*, int*, Greater) 인 함수 생성
}






