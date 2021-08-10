class Base
{
public:
	virtual void foo(int) {}
	virtual void goo() const {}
	virtual void hoo() {}
	void koo() {}
};
/*
class Derived : public Base
{
public:
	virtual void foo(double) {}
	virtual void goo() {}
	virtual void hooo() {}
	void koo() {}
};
*/

class Derived : public Base
{
public:
	// override : 기반 클래스의 가상함수를 재정의 한다고
	//			컴파일러에게 알려주는것
	virtual void foo(double) override {}
	virtual void goo() override final {}  // 더 이상 재정의 불가능
	virtual void hooo() override {}
	void koo() override {}
};

int main()
{

}