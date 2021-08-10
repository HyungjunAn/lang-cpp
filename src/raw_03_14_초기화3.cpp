// braced-init-list
// direct vs copy


struct Point { int x, y; };

class Complex
{
	int re, im;
public:
	Complex(int a, int b) : re(a), im(b) {}
};

void foo(Complex c) {} 

int main()
{
	/*
	int n1 = 0;
	int n2(0);
	int x[3] = { 1,2,3 };
	Point   p = { 1,1 };
	Complex c(1, 1);
	*/


	// 일관된 초기화(uniform initialization,중괄호 초기화)
	// direct initialization - 207
	int n1{ 0 };
	int n2{ 0 };
	int x[3]{ 1,2,3 };
	Point   p{ 1,1 };
	Complex c{ 1, 1 };
	//---------------------------
	// copy initialization - 207
	int n1 = { 0 };
	int n2 = { 0 };
	int x[3] = { 1,2,3 };
	Point   p = { 1,1 };
	Complex c = { 1, 1 };



	foo(c);
}



