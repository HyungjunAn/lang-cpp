// ������ ���� ( smkang @ codenuri.co.kr )
// cafe.naver.com/cppmaster �� �����Ͻø�Խ��� �ֽ��ϴ�.
// 1���� ���� �ҽ� �޾� �μ���..
// ������ ����� �ҽ��� ���������� �Խ��ǿ� �÷� ���ڽ��ϴ�.
// www.isocpp.org
// www.cppreference.com

// VC++  2017, 2019, g++  8.x





#include <iostream>
#include <string>
#include <complex>
#include <chrono>
using namespace std;
using namespace std::chrono;

void foo(string)		{ cout << "string" << endl; }
void foo(const char* )	{ cout << "const char*" << endl; }

int main()
{
	int n1 = 0b1; // 2���� ǥ���.  
	int n2 = 1'000'000; // ���� ���� ����

	int x[3] = { 1,2,3 };


	auto n3 = x[0]; // �캯�� ǥ�������� �º��� Ÿ�� ����

	decltype(n3) n4; // () ���� ǥ�������� Ÿ�� ����
	
	decltype(x[0]) n5 = n2; // int&

	auto a1 = x; // int*
	decltype(x) d1; // int[3]


	for (int i = 0; i < 3; i++)
		cout << x[i] << endl;

	// C++11 range for ����
	for (auto& n : x)
		cout << n << endl;


	foo("hello"); // const char*
	foo("hello"s);// string

	float f = 3.4f;

	seconds s = 3min + 20s;// +30us;
	cout << s.count() << endl; // 200
}



