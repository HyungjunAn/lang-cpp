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


	// -> �� . ������  - 329
	// -> : ���ü(Car) �� ��� �Լ�
	p1->Go();

	// . : ����Ʈ ������(shared_ptr)�� ��� �Լ�
	cout << p1.use_count() << endl; // ������� 2

	Car* p = p1.get(); // p1�� ����Ű�� ��¥ �ּ� ���

}





