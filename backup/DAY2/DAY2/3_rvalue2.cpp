// rvalue와 참조 문법

// 238 page
int main()
{
	int n = 10;

	// 규칙 1. 일반 lvalue 참조는 lvalue 만 참조할수 있다.
	int& r1 = n; // ok
	int& r2 = 10;// error

	// 규칙 2. const lvalue 참조는 lvalue와 rvalue 모두 참조할수 있다.
	const int& r3 = n; // ok
	const int& r4 = 10;// ok
	//int& r8 = const_cast<int&>(r4) = 10;

	// 규칙 3. rvalue reference는 rvalue 만 참조할수 있다.
	//  C++11 에서 등장, const 속성없이 rvalue를 가리키기 위해
	int&& r5 = n; // error
	int&& r6 = 10;// ok
}






