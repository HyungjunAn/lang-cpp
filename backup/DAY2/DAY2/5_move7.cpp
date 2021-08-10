#include <iostream>
#include <string>
#include <type_traits>
using namespace std;

class Data
{
	string str;
public:
	Data(string s = "AAA") : str(s) {}

	Data(const Data& s) : str(s.str) { cout << "copy" << endl; }

	Data& operator=(const Data& s)
	{
		cout << "copy=" << endl;
		str = s.str;
		return *this;
	}

	Data(Data&& s) noexcept : str(move(s.str)) { cout << "move" << endl; }

	Data& operator=(Data&& s) noexcept
	{
		cout << "move=" << endl;
		str = move(s.str);
		return *this;
	}
};

// setter 를 만들어 봅시다. 255 page
class Object
{
	Data data;
public:
	//void setData(Data d) { data = d; }

	// C++98/03 시절에 많이 사용하던 코드
	// 아래 코드는 복사만 지원 합니다.
	//void setData(const Data& d) { data = d; } // 항상 복사만

	// 방법 1. 2개의 setter를 제공한다.
	//void setData(const Data& d) { data = d; }
	//void setData(Data&& d) { data = move(d); }

	// 2. call by value
	// 예전에는 사용하지 말자고 했지만,,, 지금은....
	//void setData(Data d) { data = move(d); }

	// 3. forwarding reference를 사용하면 
	//    Data&, Data&& 버전이 자동생성된다.
	// T&&
	// lvalue(d1) =>       T : Data&  T&& : Data& && => Data&
	// rvalue(move(d1)) => T : Data   T&& : Data&&
	template<typename T> void setData(T&& d)
	{
		// 다음중 맞는 것은 ?
		data = d; // 1. lvalue.. 무조건 복사.
		data = move(d); // 2. 무조건 move 
		data = forward<T>(d); // 3. lvalue를 보낸경우 copy
							//   rvalue를 보낸경우 move
	}
};

int main()
{
	Object o;

	Data d1;
	o.setData(d1);		// 복사 1회
						// 복사 1회, move 1회
	o.setData(move(d1)); // move 1회
						//  move 2회
}




