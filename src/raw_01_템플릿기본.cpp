// ���ø��⺻.cpp  �ҽ� �߰��ϼ���

// C����� ���� : ������ �̸��� �Լ��� 2�� ����� ����.
// C++ : ������ �̸��� �Լ� ��밡�� - �Լ� �����ε�.
/*
int square(int n)
{
	return  n * n;
}
double square(double n)
{
	return  n * n;
}
*/

/*
// ������ �ڵ尡 �ݺ��Ǹ� �ڵ带 �ڵ������ǰ� ����.
#define MAKE_SQUARE(T) T square(T a) { return a* a;}

MAKE_SQUARE(int);
MAKE_SQUARE(double);
*/

// ��ó���Ⱑ �ƴ� �����Ϸ����� �ڵ� ������ ��û�Ѵ�.

template<typename T> // template parameter
T square(T a)        // call parameter
{
	return a* a;
}

int main()
{
	printf("%p", &square); // error
	printf("%p", &square<int> ); // ok


	// �Լ� ���ø��� ����ϴ� ��Ȯ�� ���.
	square<int>(3);
	square<double>(3.4);

	// template �Ķ���ʹ� ��������. ������ call paramter�� ������
	// Ÿ�� ����
	square(3);

	int n = 3;
	square(++n);
	square(3.4);
}