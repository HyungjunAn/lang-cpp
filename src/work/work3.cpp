#include <iostream>
#include <type_traits>
using namespace std;

// 1. swap ������� ����, ���� ��ȯ�ϼ���.
// 2. �迭�� ũ�⸦ ���ϴ� C++ ǥ�� traits�� extent<> �Դϴ�. ������ cppreference.com �����ϼ���.
// 3. Sort()�˰����� �ƹ� �˰����̳� ����ϼ���..

template<typename T> void Sort(T& arr)
{
	
}

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };

	Sort(x);

	for (auto& n : x)
		cout << n << endl;
}