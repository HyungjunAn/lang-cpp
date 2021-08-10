#include <iostream>
#include <forward_list> // �̱۸���Ʈ
#include <list>
using namespace std;

// 305 page

int main()
{
	list<int>         ds = { 1,2,3,4 };
	forward_list<int> ss = { 1,2,3,4 };
	
	auto p1 = begin(ds);
	auto p2 = begin(ss);

	// �Ʒ� �ڵ带 �� ������ ������
	++p1; // ok
	--p1; // ok
	++p2; // ok
	--p2; // error. �ڷᱸ�� Ư���� �������θ� �̵������ϴ�.
}




// �ݺ��� ī�װ�
// 1. �Է� �ݺ��� : �Է�, ++

// 2. ��� �ݺ��� : ���, ++

// 3. ������ �ݺ��� : �Է�, ++, multi pass       -> �̱۸���Ʈ �ݺ���

// 4. ����� �ݺ��� : �Է�, ++, --, multi pass    -> ������Ʈ �ݺ���

// 5. ���� ���� �ݺ��� : �Է�, ++, --, +, -, [], multi pass    ->���ӵ� �޸𸮿� ����

// 6. continuous �ݺ���(C++11)	: multi pass, ���ӵ� �޸��� �ݺ��� (vector�ǹݺ���)
