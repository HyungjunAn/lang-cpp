#include <iostream>
#include <list>
#include <vector>
using namespace std;
/*
// 5개의 반복자 카테고리를 타입화 합니다.
// empty  class 를 사용하는 기술
struct input_iterator_tag {};
struct output_iterator_tag {};
struct forward_iterator_tag : input_iterator_tag {};
struct bidirectional_iterator_tag : forward_iterator_tag {};
struct random_access_iterator_tag : bidirectional_iterator_tag {};

// 반복자 설계시 자신이 어떤 종류인지를 외부에 알려야 합니다.
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
// tag dispatching 기술 - 1990년말 ~ 2000년 초반에 널리 사용된 기술
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
void xadvance(T& p, int n)  // n >0 일때만 고려
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