// 242

// int&  : 인자로 int 타입의 lvalue 만 받을수 있다.
// int&& : 인자로 int 타입의 rvalue 만 받을수 있다.
// T&    : 인자로 임의의 타입의 lvalue 만 받을수 있다.
// T&&   : 인자로 임의의 타입의 lvalue 와 rvalue 모두 받을수 있다.
//		  "forwarding reference"


// const int& 와 T&&

// const int& : lvalue 와 rvalue 모두 받을수 있다.
//				상수성이 추가된다. 수정 불가능.
//				하나의 함수이다.			

// T&& : lvalue 와 rvalue 모두 받을수 있다.
//				상수성이 없이 받을수 있다. 수정 가능.
//				lvalue를 보낼때, rvalue를 보낼때 각각 다른함수생성
// lvalue(n)  전달 => T : int&  T&& : int& && => f4(int&)
// rvalue(10) 전달 => T : int   T&& : int&&   => f4(int&&)




/*
void f1(int&  a) {}
void f2(int&& a) {}

//-------------------------------------------
template<typename T>
void f3(T& t) {}

int main()
{
	int n = 10;
	// 1. 사용자가 타입을 직접 전달하는 경우
	f3<int>(n );	//  T : int, T& : int&  => f3(int&)
	f3<int&>(n );	//  T : int&, T& : int& & => f3(int&)
	f3<int&&>(n );	//	T : int&&, T& : int&& & => f3(int&)

	// 2. 사용자가 타입을 전달하지 않을때
	// 컴파일러는 최대한 노력해서 함수를 생성해야 한다.
	f3(10); // f3(int&&)를 생성하도록 T를 결정할수 없다.
			// 함수 생성 실패, 컴파일 에러
	f3(n);  // T가 int로 결정되어서, f3(int&) 함수 생성
}

*/




template<typename T>
void f4(T&& t) {}

int main()
{
	int n = 10;

	// 1. 타입을 명시적으로 전달하는 경우
	//    ? 에 n 또는 10을 넣어 보세요
	f4<int>(10 );	// T : int   T&& : int&&   => f4(int&&  )
	f4<int&>(n );	// T : int&  T&& : int& && => f4(int&)
	f4<int&&>(10 );	// T : int&& T&& : int&& &&=> f4(int&&  )

	// 2. 타입을 전달하지 않은 경우
	//   컴파일러는 최대한 함수를 만들수 있도록 노력한다.
	f4(n);  // T를 int& 로 결정, T&& : int& && => f4(int&) 생성
	f4(10); // T를 int로 결정,   T&& : int &&  => f4(int&&)생성
}