#include <iostream>
using namespace std;

// 일반화(generic) 프로그래밍 - 함수/클래스의 활용도를 최대한 
//								다양하게 활용가능하도록..

// step 2. 검색 구간의 일반화 - 부분 문자열 검색이 가능하게 한다.
// [first, last )  : 반 개행 구간 (시작은 포함, 끝은 포함안됨)

char* xstrchr(char* first, char* last, char c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? 0 : first;
}

int main()
{
	char s[] = "abcdefg";

	char* p = xstrchr(s, s + 4, 'e' );

	if (p == 0)
		cout << "not found" << endl;
	else
		cout << *p << endl;
}