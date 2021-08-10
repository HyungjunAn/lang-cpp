#include "cppmaster.h"

enum { red = 1, blue = 2};

class Point{};

int main()
{
	int n = 0;
	const int c = 0;

	LOG_VALUE_CATEGORY(n); // cppmaster.h 에 있는 매크로함수
	LOG_VALUE_CATEGORY(c);
	LOG_VALUE_CATEGORY(red);
	LOG_VALUE_CATEGORY(Point());

	LOG_VALUE_CATEGORY(n+1); // n + 1 = 0;

	LOG_VALUE_CATEGORY(++n);   // ++n = 10  ok
	LOG_VALUE_CATEGORY(n++);
	int n1 = 3;
	//int s = (++n1) * (++n1);
	int s = n1++;

	cout << n1 << endl; // ?
}