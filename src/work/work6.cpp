#include <iostream>
#include <string>
using namespace std;

// 과제 의도 : 완벽한 전달을 이해..
//             C++ 표준의 make_shared<> 함수의 원리

class Animal
{
	int age;
public:
	virtual ~Animal() {}
};

class Dog : public Animal
{
	double weight;
public:
	Dog() {}
	Dog(double d) : weight(d) {}
};

class Cat : public Animal
{
	int color;
public:
	Cat() {}
	Cat(int& c) : color(c) { c = 20; }
};

template<typename T> Animal* make_animal()
{
	Animal* p =  new T;

	return p;
}

int main()
{
	int n = 10;
	Animal* p1 = make_animal<Dog>();
	Animal* p2 = make_animal<Cat>();
	Animal* p3 = make_animal<Dog>(3.4);
	Animal* p4 = make_animal<Cat>(n);

	cout << n << endl; // 20 이 나와야 합니다.
}

