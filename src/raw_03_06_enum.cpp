#include <iostream>
using namespace std;
// 181
// C, C++98�� enum : unscoped enum �̶�� �θ���.
//enum COLOR { red = 1, blue = 2 };


// C++11  ���ο� enum - scoped enum
// ���� : �ݵ�� �̸��� �Բ� ����ؾ� �Ѵ�. - ���� ������ �ڵ�
//        ����� Ÿ���� �����Ҽ� �ִ�.
enum class COLOR2 : char { red = 1, blue = 2 };

int main()
{
	//int n1 = COLOR2::red;  // error
	COLOR2 n1 = COLOR2::red;  // ok


	//int n1 = COLOR::red;
//	int n2 = red;
	//int red = 3;

	//cout << red << endl; // ��������
}







