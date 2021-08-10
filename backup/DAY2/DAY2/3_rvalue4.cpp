// 240 page
typedef int&  LR;
typedef int&& RR;

int main()
{
	int n = 10;

	LR r1 = n;	// ok
	RR r2 = 10;	// ok

	// reference collapsing 이라고 합니다. && &&의 경우만 && 이다.
	LR& r3 = n ; // int&  &
	RR& r4 = n ; // int&& &

	LR&& r5 = n ; // int&  &&
	RR&& r6 = 10 ; // int&& &&  => int&&


	int& & r7 = n; // 컴파일 에러. 직접 코드로 레퍼런스의 레퍼런스를
					// 만들수는 없다.

}

template<typename T> void foo(T& a) {}

foo<int&>(n); // ?





