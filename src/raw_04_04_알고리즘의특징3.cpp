
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

// �˰����� 4���� ���� - 317 page

// ������ : bool �� ��ȯ�ϴ� �Լ�. �˰��� ���ڷ� ���� ���ȴ�.
// ���� �Լ� : ���ڰ� �Ѱ��ΰ�
// ���� �Լ� : ���ڰ� 2�� �ΰ�

bool foo(int a) { return a % 3 != 0; }

int main()
{
	vector<int> v1 = { 1,2,3,1,2,3,1,2,3,1 };
	vector<int> v2(10, 0);

	//remove(begin(v1), end(v1), 3);

	//auto p = remove_copy(begin(v1), end(v1), begin(v2), 3);
	//v2.erase(p, end(v2));

	//remove_if(begin(v1), end(v1), foo );


	remove_copy_if(begin(v1), end(v1), begin(v2),  foo);


	for (auto& n : v1)	cout << n << " ";
	cout << endl;
	for (auto& n : v2) cout << n << " ";

	//�Ʒ� �Լ��� ������� ?
	//sort_copy(begin(v1), end(v1), begin(v2));
}






