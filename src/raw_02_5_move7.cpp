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

// setter �� ����� ���ô�. 255 page
class Object
{
	Data data;
public:
	//void setData(Data d) { data = d; }

	// C++98/03 ������ ���� ����ϴ� �ڵ�
	// �Ʒ� �ڵ�� ���縸 ���� �մϴ�.
	//void setData(const Data& d) { data = d; } // �׻� ���縸

	// ��� 1. 2���� setter�� �����Ѵ�.
	//void setData(const Data& d) { data = d; }
	//void setData(Data&& d) { data = move(d); }

	// 2. call by value
	// �������� ������� ���ڰ� ������,,, ������....
	//void setData(Data d) { data = move(d); }

	// 3. forwarding reference�� ����ϸ� 
	//    Data&, Data&& ������ �ڵ������ȴ�.
	// T&&
	// lvalue(d1) =>       T : Data&  T&& : Data& && => Data&
	// rvalue(move(d1)) => T : Data   T&& : Data&&
	template<typename T> void setData(T&& d)
	{
		// ������ �´� ���� ?
		data = d; // 1. lvalue.. ������ ����.
		data = move(d); // 2. ������ move 
		data = forward<T>(d); // 3. lvalue�� ������� copy
							//   rvalue�� ������� move
	}
};

int main()
{
	Object o;

	Data d1;
	o.setData(d1);		// ���� 1ȸ
						// ���� 1ȸ, move 1ȸ
	o.setData(move(d1)); // move 1ȸ
						//  move 2ȸ
}




