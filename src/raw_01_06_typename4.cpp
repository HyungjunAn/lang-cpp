#include <iostream>
using namespace std;

struct Object
{
public:
	template<typename T> class Data
	{
		T buff[100];
	public:
		template<typename U> static void foo()
		{
			cout << "foo" << endl;
		}
	};
};

template<typename T> void foo(T obj)
{

}

int main()
{
	// Object �ȿ� �ִ� Data Ÿ���� ��ü�� ����
	

}