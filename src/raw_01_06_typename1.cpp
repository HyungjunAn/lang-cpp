// 36 page
struct Test
{
	// �Ʒ� 4�� ����� ������ Ư¡�� ?
	enum { value = 0 };
	static int data;

	typedef int DWORD;
	struct nested {};
};
int Test::data = 0;

int main()
{
	int p = 0;

	Test::value * p; // ���ϱ� p
	Test::data * p;  // ���ϱ� p
	Test::DWORD * p; // ������ ����  p����. ���� �̸� ������ �����Ƿ� error
	Test::nested * p;// ������ ���� ����.
}



