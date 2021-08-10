#include <iostream>
#include <string>
#include <vector>
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

	// 되도록 이면 move 계열 함수를 만들때는 예외가 없음을 컴파일러에게 알려야 한다.
	// 대부분의 C++ 컴파일러의 STL은 예외가 없을때만 move를 사용한다.
	
	// noexcept : 함수가 예외가 없음을 컴파일러에게 알리는 것
	Data(Data&& s) noexcept : str(move(s.str))
	{
		cout << "move" << endl; // new int
	}


	Data& operator=(Data&& s) noexcept
	{
		cout << "move=" << endl;
		str = move(s.str);
		return *this;
	}
};
// 252 page
int main()
{
	vector<Data> v(5);
	v.resize(10); // 버퍼를 10개로 늘려야 한다.


	Data d1;
	Data d2 = d1; // 복사
	Data d3 = move(d1); // move
	Data d4 = move_if_noexcept(d1);// move생성자가 
								// 예외가 없을때만 move
}







// C++11 핵심 : perfect forwarding, move, lambda expression
//               나머지들...

// C++20 : module(import), coroutine, concept, range

//import std.vector;

//foo();