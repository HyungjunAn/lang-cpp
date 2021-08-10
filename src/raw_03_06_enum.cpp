#include <iostream>
using namespace std;
// 181
// C, C++98의 enum : unscoped enum 이라고 부른다.
//enum COLOR { red = 1, blue = 2 };


// C++11  새로운 enum - scoped enum
// 장점 : 반드시 이름과 함께 사용해야 한다. - 보다 안전한 코드
//        요소의 타입을 변경할수 있다.
enum class COLOR2 : char { red = 1, blue = 2 };

int main()
{
	//int n1 = COLOR2::red;  // error
	COLOR2 n1 = COLOR2::red;  // ok


	//int n1 = COLOR::red;
//	int n2 = red;
	//int red = 3;

	//cout << red << endl; // 지역변수
}







