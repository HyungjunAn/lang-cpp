#include <iostream>
using namespace std;

// 51 page
// primary template
template<typename T> class Stack
{
	T* buff;
public:
	void push(T a) { cout << "T" << endl; }
};
// partial specialization( �κ� Ư��ȭ)
template<typename T> class Stack<T*>
{
	T* buff;
public:
	void push(T a) { cout << "T*" << endl; }
};

// specialization(Ư��ȭ, Ÿ���� Ȯ���� ���)
template<> class Stack<char*>
{
	char* buff;
public:
	void push(char* a) { cout << "char*" << endl; }
};



int main()
{
	Stack<int>   s1;  s1.push(0);
	Stack<int*>  s2;  s2.push(0);
	Stack<char*> s3;  s3.push(0);
}




