// 292 �Ʒ� �κ�
void foo( int(*f)(int, int) ) {} // 1. �Լ� ������
							// f ȣ��� �ζ��� ġȯ �ȵ�.

//void foo(auto f) {} // error. auto�� �Լ����ڰ� �ɼ� �����ϴ�.

//�ٽ� : ���� ǥ������ ���ڷ� ���� ���� ���ø��� ���� �����ϴ�.
template<typename T> void foo(T f) {}  //2.    f ���� ġȯ��.

int main()
{
//	foo(3.3);
//	foo(3);
	foo( [](int a, int b) { return a + b; } );
	foo( [](int a, int b) { return a - b; } );
}