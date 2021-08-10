
int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 1, b = 2;

	int x1[Add(1, 2)];

	int x2[Add(a, b)];

	int c = Add(a, b);
}