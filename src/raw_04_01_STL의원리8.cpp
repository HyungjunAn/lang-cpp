#include <iostream>
using namespace std;

template<typename T>
struct Node
{
	T data;
	Node* next;
	Node(const T& d, Node* n) : data(d), next(n) {}
};

// slist 안에 있는 노드를 가리키는 포인터 역활을 하는 클래스
template<typename T> class slist_iterator
{
	Node<T>* current = 0; // list의 요소를 가리키는 포인터
public:
	slist_iterator(Node<T>* p = 0) : current(p) {}

	slist_iterator& operator++()
	{
		current = current->next;

		return *this;
	}

	T& operator*()
	{
		return current->data;
	}
	
	bool operator==(const slist_iterator& it) 
	{
		return current == it.current;
	}
	bool operator!=(const slist_iterator& it)
	{
		return current != it.current;
	}

};








template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a) { head = new Node<T>(a, head); }

	// 모든 컨테이너는 자신의 시작요소와 마지막 다음 요소를 가리키는
	// 반복자를 반환하는 멤버함수가 있어야 한다 - 약속
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end()   { return slist_iterator<T>(0); }

};





int main()
{
	slist<int> s;
	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40); 

	slist_iterator<int> p = s.begin();  
	// 이제 p는 포인터 처럼 동작합니다.
	cout << *p << endl;  // 40
	++p;
	cout << *p << endl;  // 30


	
}




