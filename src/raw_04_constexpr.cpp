//constexpr.cpp

// constexpr Ȱ��
// 1. constexpr ��� �����
// 2. if constexpr
// 3. constexpr �Լ� �����.

// constexpr �Լ� : �Լ� ���ڷ� ������ �ð� ����� ���޵Ǹ�
//                  ������ �ð��� �Լ��� ������ �޶�� �ǹ�.
constexpr int Add(int a, int b) { return a + b; }

constexpr int factorial(int n)
{
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main()
{
	//int arr1[Add(1, 2)]; //?
	int arr2[factorial(5)];

	int a = 1, b = 2;
	int n = Add(a, b);

	int arr3[Add(a, b)]; // error





	int n = 10;

	// ������ ������ ?
	const int c1 = 10;
	const int c2 = n;
	constexpr int c3 = 10;
	constexpr int c4 = n; // error
}