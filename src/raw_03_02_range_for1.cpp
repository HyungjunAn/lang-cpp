#include <iostream>
#include <vector>
using namespace std;

// 170 page
int main()
{
	vector<int> v = { 1,2,3,4,5 };

	// range for 문
	for (int n : v)
		cout << n << endl;

	//  위 코드를 보고 컴파일러는 아래 코드를 생성합니다.
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