#include <string>
#include <iostream>
using namespace std;

// 과제. move 지원 클래스 만들기

class People
{
	string name;
	string addr;
	int    age;
public:
	People(string n, string add, int a) : name(n), addr(add), age(a) {}

	// 복사 생성자, 대입연산자, Move 생성자, Move 대입연산자를 만드세요..
	// 실행 여부를 확인하기 위해 logging 해주세요
};

int main()
{
	People p1( "홍길동", "서울", 20 );
	People p2 = p1;       // copy
	People p3 = move(p1); // move
}
