// 240 page
typedef int&  LR;
typedef int&& RR;

int main()
{
	int n = 10;

	LR r1 = n;	// ok
	RR r2 = 10;	// ok

	// reference collapsing �̶�� �մϴ�. && &&�� ��츸 && �̴�.
	LR& r3 = n ; // int&  &
	RR& r4 = n ; // int&& &

	LR&& r5 = n ; // int&  &&
	RR&& r6 = 10 ; // int&& &&  => int&&


	int& & r7 = n; // ������ ����. ���� �ڵ�� ���۷����� ���۷�����
					// ������� ����.

}

template<typename T> void foo(T& a) {}

foo<int&>(n); // ?





