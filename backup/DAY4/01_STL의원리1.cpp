



// cafe.naver.com/cppmaster ���� "4���� �����ҽ�" �����ø� �˴ϴ�.


// �⼮ üũ(QR) ���ּ���.










#include <iostream>
using namespace std;



// step 1. strchr �����
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