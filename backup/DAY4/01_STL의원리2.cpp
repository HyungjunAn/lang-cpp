#include <iostream>
using namespace std;

// �Ϲ�ȭ(generic) ���α׷��� - �Լ�/Ŭ������ Ȱ�뵵�� �ִ��� 
//								�پ��ϰ� Ȱ�밡���ϵ���..

// step 2. �˻� ������ �Ϲ�ȭ - �κ� ���ڿ� �˻��� �����ϰ� �Ѵ�.
// [first, last )  : �� ���� ���� (������ ����, ���� ���Ծȵ�)

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