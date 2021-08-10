#include <algorithm>
#include <functional>  // less<>, greater<>등의 함수객체가 있습니다
using namespace std;

// 289 page
int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	// 1. 함수를 사용한 정책 변경
	// sort(x, x + 10, cmp1);

	// 2. 함수객체를 사용한 정책 변경
	//less<int> f;
	//sort(x, x + 10, f);

	sort(x, x + 10, less<int>()); // 임시객체를 사용한 전달


	// 3. C++11 부터는 람다 표현식 사용
	sort(x, x + 10, [](int a, int b) { return a < b; });

	//--------------------------------------------------
	// 컴파일러는 위 한줄을 보고 아래 코드를 생성 합니다.
	class ClosureType
	{
	public:
		inline bool operator()(int a, int b) const
		{
			return a < b;
		}
	};
	sort(x, x + 10, ClosureType() );
	//--------------------------------

}






