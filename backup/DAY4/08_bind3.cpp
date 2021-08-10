#include <iostream>
using namespace std;

void f1(int a)
{
	printf("f1 : %d\n", a);
}
void f3(int a, int b, int c, int d)
{
	printf("f3 : %d, %d, %d\n", a, b, c);
}
void f4(int a, int b, int c, int d)
{
	printf("f4 : %d, %d, %d, %d\n", a, b, c, d);
}

int main()
{
	void(*f)(int);
	f = &f1; // ok
	f = &f3;

}