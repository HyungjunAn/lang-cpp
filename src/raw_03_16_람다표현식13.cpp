#include <iostream>
using namespace std;

// 295 page

int g = 0;

int main()
{
	int v1 = 10;
	int v2 = 10;

	auto f1 = [](int a) { return a + g; };// 전역변수 사용. ok

	// 지역변수 사용
	//auto f2 = [](int a) { return a + v1 + v2; }; // error

	// 지역변수 캡쳐 - 
	//auto f2 = [v1, v2](int a) { return a + v1 + v2; }; //ok

	//auto f2 = [v1, v2](int a) { v1 = 100; return a + v1 + v2; }; //ok

	// mutable 람다 : () 연산자 함수를 비상수 함수로 해달라
	//auto f2 = [v1, v2](int a) mutable { v1 = 100; return a + v1 + v2; };
	

	//cout << sizeof(f2) << endl; // 8byte


	// 참조 캡쳐
	auto f2 = [&v1, &v2](int a) { v1 = 100; return a + v1 + v2; };
	
	cout << sizeof(f2) << endl;

	f2(0); //람다표현식 사용(호출)

	cout << v1 << endl; // 10
		
		
		//------------------------
		/*
	// 변수를 캡쳐하면 멤버 데이타가 추가됩니다.
	class ClosureType
	{
		int* v1;
		int* v2;
	public:
		ClosureType(int* a, int* b) : v1(a), v2(b) {}

		inline bool operator()(int a, int b) const
		{
			*v1 = 100; 
			return a + *v1 + *v2;
		}
	};
	auto f2 = ClosureType(v1, v2);

	*/
}








