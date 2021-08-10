
// 129~130

void goo(int a, int b, int c) {}
int  hoo(int a) { return - a; }

template<typename ... Types> void foo(Types ... args)
{
	goo(args...);   // goo(1,2,3)
	goo(++args...); // goo(++E1, ++E2,++E3)
	//goo(&args...);  // goo(&E1, &E2, &E2)

	goo(hoo(args...)); // goo(hoo(1,2,3)) // error

	goo(hoo(args)...); // goo(hoo(E1), hoo(E2), hoo(E3))
}

int main()
{
	foo(1, 2, 3);	// Types : int, int, int
					// args  : 1,2,3
}