
int main()
{
	int n = 10;
	const int c1 = n;  // ok
	const int c2 = 10; // ok

	// constexpr : ������ �ð� ����� ����� Ű����, c++11
	constexpr int c3 = n;  // error
	constexpr int c4 = 10; // ok
}

// ���� �ҽ��� ī��(cafe.naver.com/cppmaster) 
// �� �÷� ���ڽ��ϴ�.