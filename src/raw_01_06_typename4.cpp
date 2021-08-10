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
	// Object 안에 있는 Data 타입의 객체를 생성
	

}