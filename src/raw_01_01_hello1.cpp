// 강석민 강사 ( smkang @ codenuri.co.kr )
// cafe.naver.com/cppmaster 에 접속하시면게시판 있습니다.
// 1일차 사전 소스 받아 두세요..
// 수업에 사용한 소스는 수업종료후 게시판에 올려 놓겠습니다.
// www.isocpp.org
// www.cppreference.com

// VC++  2017, 2019, g++  8.x





#include <iostream>
#include <string>
#include <complex>
#include <chrono>
using namespace std;
using namespace std::chrono;

void foo(string)		{ cout << "string" << endl; }
void foo(const char* )	{ cout << "const char*" << endl; }

int main()
{
	int n1 = 0b1; // 2진수 표기법.  
	int n2 = 1'000'000; // 숫자 구분 가능

	int x[3] = { 1,2,3 };


	auto n3 = x[0]; // 우변의 표현식으로 좌변의 타입 결정

	decltype(n3) n4; // () 안의 표현식으로 타입 결정
	
	decltype(x[0]) n5 = n2; // int&

	auto a1 = x; // int*
	decltype(x) d1; // int[3]


	for (int i = 0; i < 3; i++)
		cout << x[i] << endl;

	// C++11 range for 문법
	for (auto& n : x)
		cout << n << endl;


	foo("hello"); // const char*
	foo("hello"s);// string

	float f = 3.4f;

	seconds s = 3min + 20s;// +30us;
	cout << s.count() << endl; // 200
}



