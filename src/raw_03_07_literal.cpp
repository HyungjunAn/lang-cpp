#include <iostream>
using namespace std;


// ����� ���� Literal �Լ�
// ���� Literal : ���ڸ� unsigned long long 
// �Ǽ�         : long double
// ���ڿ�       : const char*, size_t �� ����..

class Meter
{
	int value;
public:
	Meter(int n = 0) : value(n) {}
};
// long long : 64��Ʈ ���� - 183 �Ʒ� �ڽ�
Meter operator""_m(unsigned long long n)
{
	return Meter(n);
}
int main()
{
	float f = 3.4f;
	Meter v = 10_m; // operator""m(10) �̶�� �Լ��� ȣ���մϴ�.

}


// 183 page




