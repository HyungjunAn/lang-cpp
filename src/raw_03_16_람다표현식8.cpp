#include <iostream>
using namespace std;
// 289 p
int main()
{
	//int Add(int a, int b) { return a + b; }
	// 람다표현식 활용

	// 1. 함수의 정책으로 전달
	sort(x, x + 10, [](int a, int b) { return a < b;  });


	// 2. auto  변수에 담아서 함수 처럼 사용가능

	auto f = [](int a, int b) { return a + b;  }; // 289 아래 부분
				// class ClosureType{}; ClosureType();

	cout << f(1, 2) << endl;


	//auto& f1 = [](int a, int b) { return a + b;  };//error.
					// 람다 표현식은 임시객체(rvalue)이다.
}



