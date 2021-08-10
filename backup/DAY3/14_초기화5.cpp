#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;


class Point
{
public:
	Point(int a, int b)          { cout << "int, int" << endl; }
	Point(initializer_list<int>) { cout << "initializer_list" << endl; }
};
int main()
{
	// �Ʒ� �ڵ尡 ���� � �����ڸ� ȣ������ �����غ����� - 212

	Point p1(1, 1);     // 1. ������ error
	Point p9({ 1,2,3 });// 2. ������ error

	
	Point p2{ 1, 1 }; // �ٽ�. 2�� ���. ������ 1�� ���


	Point p3 = (1, 2); // error
	Point p4 = { 1, 1 }; // ���� �ʱ�ȭ. 2��, ������ 1��
	
	Point p5(1, 1, 1); // error
	Point p6{ 1,1,1 }; // ok... 2��
	
	Point p7 = { 1,1,1 }; // ok  2


	vector<int> v1(1, 2); // 1���� 2�� �ʱ�ȭ
	vector<int> v2{1 ,2}; // 2���� 1,2�� �ʱ�ȭ

	vector<int> v3{ 1,2,3,4,5,6,7 };// ok

	// explicit vector(int size) ������
	vector<int> v5(10); // ok
	vector<int> v6 = 10; // error

	//vector(initializer_list<int>) ������
	vector<int> v7{ 10 }; // ok
	vector<int> v8 = { 10 }; // ok
}