#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

// aggregate �ʱ�ȭ :  �迭, ����ü ó�� = { } �� �ʱ�ȭ �����Ѱ͵�
//					�����ڰ� ��� �Ǵ� �͵�..
struct Point
{
	int x, y;

	//Point() {} // ����ڰ� ���� �����ڰ� ������ aggreate type �ƴ�.

	Point() = default; // aggregate   type   215 page

	//Point() {}   // 1
	//Point(int a, int b) {}  // 2
};

int main()
{
	Point p1;
	//Point p2(0,0);
	Point p2={ 0, 0 };
}

// ���.. �� ��� �ϼ���

// A a(5);    // direct
// A a = 5;   // copy ... explicit  �����ڶ�� error
// A a;       // default..     ��� ��� �����Ⱚ
// A a{};     // value �ʱ�ȭ.. ��� ����� 0
//				// �� ����ڰ� ���� �����ڰ� ��������

// A(){};        // ����ڰ� ���� ������
// A() = default; // �����Ϸ��� ���� ������

// A a(5);  // A(int)�� �ʿ� 
// A a{5}; // A(initializer_list<int>), A(int)

int n1 = 0;
int n1{ 0 }; // ���� ǥ���.