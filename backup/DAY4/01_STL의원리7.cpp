// 2_컨테이너
#include <iostream>
using namespace std;

// 싱글리스트를 만들어 봅시다.
template<typename T> 
struct Node
{
	T data;
	Node* next;
	Node(const T& d, Node* n) : data(d), next(n) {}
};

template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a) { head = new Node<T>(a, head); }
};

int main()
{
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40); // 이때 메모리 구조를 생각해 보세요
}




