// 36 page
struct Test
{
	// 아래 4개 멤버의 공통의 특징은 ?
	enum { value = 0 };
	static int data;

	typedef int DWORD;
	struct nested {};
};
int Test::data = 0;

int main()
{
	int p = 0;

	Test::value * p; // 곱하기 p
	Test::data * p;  // 곱하기 p
	Test::DWORD * p; // 포인터 변수  p선언. 동일 이름 변수가 있으므로 error
	Test::nested * p;// 포인터 변수 선언.
}



