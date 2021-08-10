// 4_�ݺ���ī�װ�1
#include <iostream>
#include <forward_list> // �̱۸���Ʈ
#include <list>
#include <algorithm>
using namespace std;

// �ݺ��� ī�װ�
// 1. �Է� �ݺ��� : �Է�, ++
// 2. ��� �ݺ��� : ���, ++
// 3. ������ �ݺ��� : �Է�, ++, multi pass       -> �̱۸���Ʈ �ݺ���
// 4. ����� �ݺ��� : �Է�, ++, --, multi pass    -> ������Ʈ �ݺ���
// 5. ���� ���� �ݺ��� : �Է�, ++, --, +, -, [], multi pass    ->���ӵ� �޸𸮿� ����
// 6. continuous �ݺ���(C++11)	: multi pass, ���ӵ� �޸��� �ݺ��� (vector�ǹݺ���)


int main()
{
	list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// �� �ݺ��� ī�װ��� �߿��Ѱ� ?
	auto p = find(begin(s), end(s), 5);  
					// find �Լ��� 1, 2��° ���ڴ� �ݺ��� �Դϴ�.
					// �ּ� �䱸 ������ ������ ������
					// => �Է� �ݺ���

	reverse(begin(s), end(s)); // => �� ����

	sort(begin(s), end(s)); // ����Ʈ �Դϴ�. => �������� �ݺ���
	//------------------------------------------

	forward_list<int> fs = { 1,2,3 };
	reverse(fs.begin(), fs.end());  // error. ����� �ݺ��ڰ�
							// �ʿ��ϴ�.



	list<int> ss = { 1,2,3 };
	sort(ss.begin(), ss.end());  // error.. �������� �ݺ��ڰ�
							// �ʿ��ϴ�.
	ss.sort();  // ���� �ƴ� �ٸ� �˰���.


	vector<int> v = { 1,2,3 };
	v.sort(); // �� ��� �Լ��� ������� ?? ����..
			  // �Ϲ��Լ�(�˰���) sort()�� ����ϸ� �ȴ�.

	sort()  // https://en.cppreference.com/
}










