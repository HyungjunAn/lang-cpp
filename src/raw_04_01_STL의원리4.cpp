#include <iostream>
using namespace std;

// step 4. ���� generic �ϰ�..

// �Ʒ� ó�� ����� 2���� ������ �ֽ��ϴ�.
// 1. ������ Ÿ�԰� �˻� ���Ÿ���� �����˴ϴ�.
//    double �迭���� int �˻� �ȵ�..

// 2. T* �� �ϸ� �ݵ��  ��¥ �����͸� ����ؾ� �մϴ�.
//    ����Ʈ ������ �ȵ˴ϴ�.
//template<typename T> T* xfind(T* first, T* last, T c)

template<typename T1, typename T2> 
T1 xfind(T1 first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? 0 : first;
}

int main()
{
	double x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = xfind(x, x + 10, 5);

	if (p == 0)
		cout << "not found" << endl;
	else
		cout << *p << endl;
}
