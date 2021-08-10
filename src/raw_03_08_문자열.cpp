#include <string>
#include <iostream>
using namespace std;

// 185
int main()
{
	//string s1 = "C:\\aa\\bb\\cc"; // "\\" 정규 표현식이나 디렉토리 표현에 널리 사용

	// Raw String : "\" 가 특수 문자열이 아닌 일반 문자열로 취급
	// 시작 토큰 : "(
	string s1 = R"(C:\aa\bb\cc)";

	cout << s1 << endl;

	// " 표기하고 싶다면 : 그냥 적으면 된다.
	string s2 = R"(C:\aa\b"b\cc)";

	// )" 를 표기하고 싶다면 : 시작하는 토큰을 변경할수 있다
	string s3 = R"***(C:\aa\b)"b\cc)***";

	// char8_t : c++20 등장.
	const char8_t* s = u8R"***(C:\aa\b)"b\cc)***";
}







