
#include <iostream>
using namespace std;

class Car
{
	int color;
public:
	void Go() { cout << "Car Go" << endl; }
	~Car()    { cout << "~Car()" << endl; }
};

// ���� : ��ü�� �ٸ� Ÿ���� ������ ó�� ���Ǵ°�
// ���� : -> �����ڸ� �������ؼ� ������ ó�� ���̰� �Ѵ�.
// ���� : ��¥ �����Ͱ� �ƴ� ��ü�̴�.
//        ����/����/����/�Ҹ��� ��� ������ �����Ҽ� �ִ�

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

	p->Go();  // (p.operator->())Go()   �� ���������
			  // (p.operator->())->Go() �� �ؼ��˴ϴ�.
}




