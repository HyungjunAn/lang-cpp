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
// 42page, �Ʒ� �ڵ�� 43 page �߰�
// ���ø� ��� �ڷᱸ��(�����̳�)�� �ڽ��� �����ϴ� Ÿ���� �ֽ��ϴ�
// ��Ÿ���� �˰� ���� ���� �ֽ��ϴ�
template<typename T> class list
{
public:
	typedef T value_type;
	//...
};
list<int> s = { 1,2,3 };
list<int>::value_type n = s.front(); // n �� Ÿ���� ������ ������
