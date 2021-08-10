// 3_autoDeduction
#include <iostream>
using namespace std;

/*
// C ����  -  Project ���� - �߱� ���� - �ڷᱸ���� �˰���

// C++�⺻ ���� 
//    -> ��ü������̺귯�����(QT, POCO, MFC, ace, web os) + ���������� 
//    => C++�߱޹��� , STL ���� 
//    => ���� �ҽ� �����ڵ��� ����ϴ� ��ޱ�� 
*/

// typededuction4.cpp - 218 page

int main()
{
	int n = 10;
	int& r = n;
	const int c = n;

	// ��Ģ 1. auto�� ������ ��Ÿ�� ������ ���鶧
	//         �캯�� ǥ������ const, volatile, reference ��
	//			��� �����ϰ� Ÿ�� ����
	auto a1 = n;// a1 : int
	auto a2 = r;// a2 : int
	auto a3 = c;// a3 : int  
	a3 = 10; // ok...  


	// ��Ģ 2. auto�� ������ ���� ������ ���鶧

	// �캯�� ���� ���۷��� �Ӽ��� �����Ѵ�.
	// const, volatile �Ӽ��� ���� �� ä�� auto�� Ÿ���� �����Ѵ�

	auto& a4 = n; // auto : int,  a4 : int&
	auto& a5 = r; // auto : int,  a5 : int&
	auto& a6 = c; // auto : const int,  a6 : const int&

	a6 = 10; // 

	// ��Ģ 3. forwarding reference ( T&&)
	auto&& a7 = 10; // rvalue :  auto : int  => int&& a7
	auto&& a8 = n;  // lvalue :  auto : int& => int& && => int&

	// int&& r; rvalue reference


	int x[3] = { 1,2,3 };

	auto  a7 = x;
	auto& a8 = x;

	cout << typeid(a7).name() << endl; 
	cout << typeid(a8).name() << endl; 
}