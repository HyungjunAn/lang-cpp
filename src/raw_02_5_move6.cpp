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

// move�� ����� ���ô�. 249 �Ʒ� �κ�
// move6.cpp
// T& : lvalue �� ���ڷ� �ްڴٴ� �ǹ�
// T&& : lvalue �� rvalue�� ��� ���ڷ� �ްڴٴ� �ǹ�
/*
template<typename T> T&& xmove(T& obj)
{
	return static_cast<T&&>(obj);
}
*/
// lvalue(n) => T : int&  T&& : int& && => int& 
// rvalue(10) => T : int  T&& : int&& 
template<typename T>
typename remove_reference<T>::type && xmove(T&& obj)
{
	return static_cast<typename remove_reference<T>::type &&>(obj);
}


int main()
{
	Data d1;
	Data d2 = d1;   // ����
	Data d3 = static_cast<Data&&>(d1); // move
	Data d4 = xmove(d1);  // move

	Data d5 = xmove(Data());
}




