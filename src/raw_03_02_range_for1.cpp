#include <iostream>
#include <vector>
using namespace std;

// 170 page
int main()
{
	vector<int> v = { 1,2,3,4,5 };

	// range for ��
	for (int n : v)
		cout << n << endl;

	//  �� �ڵ带 ���� �����Ϸ��� �Ʒ� �ڵ带 �����մϴ�.
	for (auto p = begin(v); p != end(v); ++p)
	{
		int n = *p;		
		//-----------------

		cout << n << endl;
	}




	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}