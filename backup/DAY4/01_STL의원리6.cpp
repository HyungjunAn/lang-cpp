
#include <iostream>
using namespace std;

// xfind ������
// 1. �˻� ���� : ��� Ÿ���� �迭�� [first, last) �� ����
//			     last �� �˻� ��� �ƴ�.

// 2. ������ ǥ�� : �ݵ�� ������ �� �ʿ� ����. 
//					��, *, ==, !=, ++ ������ �����ؾ� �Ѵ�.

// 3. ������ �̵� : ������ ++

// 4. ������ ��ȯ : last ( past the end ��� �θ���.)


template<typename InputIter, typename T>
InputIter xfind(InputIter first, InputIter last, const T& c)
{
	while (first != last && *first != c)
		++first;

	return first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = xfind(x, x + 10, 5);

	if (p == x + 10)
		cout << "not found" << endl;
	else
		cout << *p << endl;
}