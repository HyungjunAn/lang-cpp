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

// move vs forward 차이점을 생각해 봅시다.
template<typename T> void foo(T&& arg)
{
	move(arg);
	forward<T>(arg);
}

int main()
{
	Data d1;
	
	foo(d1);
	foo(Data());
}




