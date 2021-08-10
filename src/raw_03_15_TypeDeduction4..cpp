// 3_autoDeduction
#include <iostream>
using namespace std;

/*
// C 문법  -  Project 수행 - 중급 문법 - 자료구조와 알고리즘

// C++기본 문법 
//    -> 객체지향라이브러리사용(QT, POCO, MFC, ace, web os) + 디자인패턴 
//    => C++중급문법 , STL 사용법 
//    => 오픈 소스 설계자들이 사용하는 고급기술 
*/

// typededuction4.cpp - 218 page

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;

	// 규칙 1. auto를 가지고 값타입 변수를 만들때
	//         우변의 표현식의 const, volatile, reference 를
	//			모두 제거하고 타입 결정
	auto a1 = n;// a1 : int
	auto a2 = r;// a2 : int
	auto a3 = c;// a3 : int  
	a3 = 10; // ok...  


	// 규칙 2. auto를 가지고 참조 변수를 만들때

	// 우변이 가진 레퍼런스 속성만 제거한다.
	// const, volatile 속성을 유지 한 채로 auto의 타입을 결정한다

	auto& a4 = n; // auto : int,  a4 : int&
	auto& a5 = r; // auto : int,  a5 : int&
	auto& a6 = c; // auto : const int,  a6 : const int&

	a6 = 10; // 

	// 규칙 3. forwarding reference ( T&&)
	auto&& a7 = 10; // rvalue :  auto : int  => int&& a7
	auto&& a8 = n;  // lvalue :  auto : int& => int& && => int&

	// int&& r; rvalue reference


	int x[3] = { 1,2,3 };

	auto  a7 = x;
	auto& a8 = x;

	cout << typeid(a7).name() << endl; 
	cout << typeid(a8).name() << endl; 
}