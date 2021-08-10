//constexpr.cpp

// constexpr 활용
// 1. constexpr 상수 만들기
// 2. if constexpr
// 3. constexpr 함수 만들기.

// constexpr 함수 : 함수 인자로 컴파일 시간 상수가 전달되면
//                  컴파일 시간에 함수를 수행해 달라는 의미.
constexpr int Add(int a, int b) { return a + b; }

constexpr int factorial(int n)
{
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main()
{
	//int arr1[Add(1, 2)]; //?
	int arr2[factorial(5)];

	int a = 1, b = 2;
	int n = Add(a, b);

	int arr3[Add(a, b)]; // error





	int n = 10;

	// 다음중 에러는 ?
	const int c1 = 10;
	const int c2 = n;
	constexpr int c3 = 10;
	constexpr int c4 = n; // error
}