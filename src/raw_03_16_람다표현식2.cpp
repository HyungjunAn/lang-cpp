// 285 page �Ʒ� �κ� ~ 286
       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

// �ٽ� 1. �ζ��� ġȯ�� ������ �ð��� �̷�� ����. 285 �Ʒ� �κ�
// 2. �ζ��� �Լ��� �Լ� �����Ϳ� ��Ƽ� ȣ���ϸ� ġȯ�ɼ� ����.
int main()
{
	int n1 = Add1(1, 2); // ȣ�� 
	int n2 = Add2(1, 2); // ġȯ..

	int(*f)(int, int);

	f = &Add2;

	int a;
	cin >> a;
	if (a == 0) f = &Add1;

	int n3 = f(1, 2); // ȣ�� ? ġȯ
}






