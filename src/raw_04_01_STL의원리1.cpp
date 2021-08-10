



// cafe.naver.com/cppmaster 에서 "4일차 사전소스" 받으시면 됩니다.


// 출석 체크(QR) 해주세요.










#include <iostream>
using namespace std;



// step 1. strchr 만들기
char* xstrchr(char* s, char c)
{
	while (*s != 0 && *s != c)
		++s;

	return *s == 0 ? 0 : s;

}

int main()
{
	char s[] = "abcdefg";

	char* p = xstrchr(s, 'd');

	if (p == 0)
		cout << "not found" << endl;
	else
		cout << *p << endl;
}