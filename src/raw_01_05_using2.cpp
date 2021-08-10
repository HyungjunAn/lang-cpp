#include <set>
#include <functional>
#include <iostream>
using namespace std;

typedef set<int, greater<int>> SET;
typedef set<double, greater<double>> SETD;

//template<typename T> typedef set<T, greater<T>> SET;

// using �� Ÿ�Ի� �ƴ϶� template alias �� �����մϴ�.
template<typename T>
using SET = set<T, greater<T>>;


int main()
{
//	set<int, greater<int> > s;
//	set<double, greater<double> > s3;

	SET<int> s2;


	s.insert(10);
	s.insert(15);
	s.insert(6);

	for (auto n : s)
		cout << n << endl;
}