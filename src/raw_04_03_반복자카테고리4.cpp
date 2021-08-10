#include <iostream>
#include <list>
#include <vector>
using namespace std;
/*
// 5���� �ݺ��� ī�װ��� Ÿ��ȭ �մϴ�.
// empty  class �� ����ϴ� ���
struct input_iterator_tag {};
struct output_iterator_tag {};
struct forward_iterator_tag : input_iterator_tag {};
struct bidirectional_iterator_tag : forward_iterator_tag {};
struct random_access_iterator_tag : bidirectional_iterator_tag {};

// �ݺ��� ����� �ڽ��� � ���������� �ܺο� �˷��� �մϴ�.
template<typename T> class vector_iterator
{
public:
	typedef random_access_iterator_tag  iterator_category;
};

template<typename T> class list_iterator
{
public:
	typedef bidirectional_iterator_tag  iterator_category;
};
*/
// tag dispatching ��� - 1990�⸻ ~ 2000�� �ʹݿ� �θ� ���� ���
template<typename T>
void xadvance_imp(T& p, int n, random_access_iterator_tag) 
{
	p = p + n;
}
template<typename T>
void xadvance_imp(T& p, int n, input_iterator_tag)
{
	while (n--) 
		++p;
}

template<typename T> 
void xadvance(T& p, int n)  // n >0 �϶��� ���
{
	xadvance_imp(p, n, typename T::iterator_category()  );
}



int main()
{
	//vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	list<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = begin(v);

	xadvance(p, 5);
}