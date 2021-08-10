
#include <iostream>
using namespace std;

class Car
{
	int color;
public:
	void Go() { cout << "Car Go" << endl; }
	~Car()    { cout << "~Car()" << endl; }
};

// 개념 : 객체가 다른 타입의 포인터 처럼 사용되는것
// 원리 : -> 연산자를 재정의해서 포인터 처럼 보이게 한다.
// 장점 : 진짜 포인터가 아닌 객체이다.
//        생성/복사/대입/소멸의 모든 과정을 제어할수 있다

class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}
	~Ptr() { delete obj; }
	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }
};

int main()
{
	//Car* p = new Car;

	Ptr p = new Car;  // Ptr p( new Car )

	(*p).Go();

	p->Go();  // (p.operator->())Go()   의 모양이지만
			  // (p.operator->())->Go() 로 해석됩니다.
}




