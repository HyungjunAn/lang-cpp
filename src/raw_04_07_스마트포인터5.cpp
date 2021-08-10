#include <iostream>
using namespace std;

#include <memory>


class Car
{
	int color;
public:
	void Go() { cout << "Car Go" << endl; }
	~Car() { cout << "~Car()" << endl; }
};

int main()
{
	shared_ptr<Car> p1(new Car);
	shared_ptr<Car> p2 = p1;


	// -> 와 . 연산자  - 329
	// -> : 대상체(Car) 의 멤버 함수
	p1->Go();

	// . : 스마트 포인터(shared_ptr)의 멤버 함수
	cout << p1.use_count() << endl; // 참조계수 2

	Car* p = p1.get(); // p1이 가리키는 진짜 주소 얻기

}





