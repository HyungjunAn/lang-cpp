#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

// value initialization vs default - 209
struct Point
{
	int x, y;

	//Point()   {}
	Point() = default;
};

int main()
{
	Point p1;  // x, y �����Ⱚ
	Point p2{};// x, y�� ��� 0, �� ����ڰ� ���� �����ڰ� ������
				// = default�� ���� �����ڴ� �־ 0 �ʱ�ȭ.

	int n1;    // �����Ⱚ   default initialization
	int n2{};  // 0���� �ʱ�ȭ  value initialization

	cout << n1 << endl; 
	cout << n2 << endl; // 0
}
