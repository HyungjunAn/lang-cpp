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
	// override : ��� Ŭ������ �����Լ��� ������ �Ѵٰ�
	//			�����Ϸ����� �˷��ִ°�
	virtual void foo(double) override {}
	virtual void goo() override final {}  // �� �̻� ������ �Ұ���
	virtual void hooo() override {}
	void koo() override {}
};

int main()
{

}