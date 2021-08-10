
struct Point { int x, y; };

class Complex
{
	int re, im;
public:
	Complex(int a, int b) : re(a), im(b) {}
};


void goo(int n)     {} // int n = {10}
void foo(Complex c) {} // Complex c = {1,2}

int main()
{
	goo(10);
	goo({ 10 }); // ok

	Complex c = { 1,2 };
	foo( { 1,2 } );    // ok
}



