#include <iostream>
#include <functional>
using namespace std;
using namespace std::placeholders;

int main()
{
	modulus<int> m;

	cout << m(10, 3) << endl; // 10 % 3 => 1

	int x[10] = { 3,6,9,2,3,6,9,3,6,9 };

	// 3의배수가 아닌 것을 찾아라
	int* p = find_if(x, x + 10, ?);
}