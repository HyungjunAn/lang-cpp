#include <iostream>
using namespace std;

// ������ �Լ� �����ε� - 239
void foo(int& a)       { cout << "int&" << endl; }       // 1
void foo(const int& a) { cout << "const int&" << endl; } // 2
void foo(int&& a)      { cout << "int&&" << endl; }      // 3

int main()
{
	int n = 10;

	foo(n);  // 1�� ȣ��, ������ 2�� ȣ��
	foo(10); // 3�� ȣ��, ������ 2�� ȣ��

	int& r1 = n;
	foo(r1); // 1��ȣ��, ������ 2�� ȣ��


	int&& r2 = 10; // 10 �� rvalue ������
					// 10 �� ����Ű�� rvalue reference�� lvalue
					// "named rvalue reference is lvalue"
					// "temporary materization"

	foo(r2); // �ٽ�.. ?  1��. 
	foo(static_cast<int&&>(r2)); //3��. 
}