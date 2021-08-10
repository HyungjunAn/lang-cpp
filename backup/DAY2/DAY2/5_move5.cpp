#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Data
{
	string str;
public:
	Data(string s = "AAA") : str(s) {}

	// ���� �迭������ ���縦
	Data(const Data& s) : str(s.str) { cout << "copy" << endl; }

	Data& operator=(const Data& s)
	{
		cout << "copy=" << endl;
		str = s.str;
		return *this;
	}

	// �ǵ��� �̸� move �迭 �Լ��� ���鶧�� ���ܰ� ������ �����Ϸ����� �˷��� �Ѵ�.
	// ��κ��� C++ �����Ϸ��� STL�� ���ܰ� �������� move�� ����Ѵ�.
	
	// noexcept : �Լ��� ���ܰ� ������ �����Ϸ����� �˸��� ��
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
	v.resize(10); // ���۸� 10���� �÷��� �Ѵ�.


	Data d1;
	Data d2 = d1; // ����
	Data d3 = move(d1); // move
	Data d4 = move_if_noexcept(d1);// move�����ڰ� 
								// ���ܰ� �������� move
}







// C++11 �ٽ� : perfect forwarding, move, lambda expression
//               ��������...

// C++20 : module(import), coroutine, concept, range

//import std.vector;

//foo();