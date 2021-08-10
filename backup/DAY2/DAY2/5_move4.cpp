#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Data
{
	string str;
public:
	Data(string s = "AAA") : str(s) {}

	// 복사 계열에서는 복사를
	Data(const Data& s) : str(s.str) { cout << "copy" << endl; }

	Data& operator=(const Data& s)
	{
		cout << "copy=" << endl;
		str = s.str;
		return *this;
	}

	// Move 계열함수 : 모든 멤버를 move 로 옮겨야 한다.- !!
	Data(Data&& s) : str(move(s.str)) { cout << "move" << endl; }

	Data& operator=(Data&& s)
	{
		cout << "move=" << endl;
		str = move(s.str);
		return *this;
	}
	
};

//string s1 = "aaa";
//string s2 = s1;
//string s3 = move(s1);




// 알고리즘만들기

// 핵심 : 알고리즘을 만들때 copy 대신 move를 사용하면 좋을 경우가 많습니다.
template<typename T> void Swap(T& a, T& b)
{
//	T tmp = a;  // 복사 생성자 호출
//	a = b;      // 대입 연산자 함수 호출. a.operator=(b)
//	b = tmp;

	T tmp = move(a);
	a = move(b);
	b = move(tmp);
}
int main()
{
	Data d1("AAA");
	Data d2("BBB");

	//Swap(d1, d2);
	swap(d1, d2); // C++ 표준  STL의 swap  

	int n = 0; // 초기화, n이 user 타입 이면 생성자 호출
	n = 0;     // 대입,  대입연산자 함수. n.operator=(0) 호출
}


