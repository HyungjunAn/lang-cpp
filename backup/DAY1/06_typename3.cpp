#include <list>
#include <vector>
#include <iostream>
using namespace std;

/*
void print_first_element(vector<int>& c)
{
	int n = c.front();

	cout << n << endl;
}
*/
/*
template<typename T> 
void print_first_element(vector<T>& c)
{
	T n = c.front();

	cout << n << endl;
}
*/

template<typename T>
void print_first_element(T& c)
{
	// T : list<double> 
	// T::value_type   => list<double>::value_type => double

	//typename T::value_type n = c.front();
	
	auto n = c.front();

	cout << n << endl;
}




int main()
{
	//vector<int> v = { 1,2,3 };
	//vector<double> v = { 1,2,3 };

	list<double> v = { 1,2,3 };

	print_first_element(v);
}
// 42page, 아래 코드는 43 page 중간
// 템플릿 기반 자료구조(컨테이너)는 자신이 저장하는 타입이 있습니다
// 그타입을 알고 싶을 때가 있습니다
template<typename T> class list
{
public:
	typedef T value_type;
	//...
};
list<int> s = { 1,2,3 };
list<int>::value_type n = s.front(); // n 의 타입을 생각해 보세요
