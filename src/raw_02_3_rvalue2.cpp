// rvalue�� ���� ����

// 238 page
int main()
{
	int n = 10;

	// ��Ģ 1. �Ϲ� lvalue ������ lvalue �� �����Ҽ� �ִ�.
	int& r1 = n; // ok
	int& r2 = 10;// error

	// ��Ģ 2. const lvalue ������ lvalue�� rvalue ��� �����Ҽ� �ִ�.
	const int& r3 = n; // ok
	const int& r4 = 10;// ok
	//int& r8 = const_cast<int&>(r4) = 10;

	// ��Ģ 3. rvalue reference�� rvalue �� �����Ҽ� �ִ�.
	//  C++11 ���� ����, const �Ӽ����� rvalue�� ����Ű�� ����
	int&& r5 = n; // error
	int&& r6 = 10;// ok
}






