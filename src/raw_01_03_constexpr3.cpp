
int main()
{
	int n = 10;
	const int c1 = n;  // ok
	const int c2 = 10; // ok

	// constexpr : 컴파일 시간 상수를 만드는 키워드, c++11
	constexpr int c3 = n;  // error
	constexpr int c4 = 10; // ok
}

// 오늘 소스는 카페(cafe.naver.com/cppmaster) 
// 에 올려 놓겠습니다.