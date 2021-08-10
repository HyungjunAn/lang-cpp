#include <iostream>
#include <string>
#include <algorithm>
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

	// Move �迭�Լ� : ��� ����� move �� �Űܾ� �Ѵ�.- !!
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




// �˰��򸸵��

// �ٽ� : �˰����� ���鶧 copy ��� move�� ����ϸ� ���� ��찡 �����ϴ�.
template<typename T> void Swap(T& a, T& b)
{
//	T tmp = a;  // ���� ������ ȣ��
//	a = b;      // ���� ������ �Լ� ȣ��. a.operator=(b)
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
	swap(d1, d2); // C++ ǥ��  STL�� swap  

	int n = 0; // �ʱ�ȭ, n�� user Ÿ�� �̸� ������ ȣ��
	n = 0;     // ����,  ���Կ����� �Լ�. n.operator=(0) ȣ��
}


