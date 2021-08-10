#include <iostream>
using namespace std;

// 295 page

int g = 0;

int main()
{
	int v1 = 10;
	int v2 = 10;

	auto f1 = [](int a) { return a + g; };// �������� ���. ok

	// �������� ���
	//auto f2 = [](int a) { return a + v1 + v2; }; // error

	// �������� ĸ�� - 
	//auto f2 = [v1, v2](int a) { return a + v1 + v2; }; //ok

	//auto f2 = [v1, v2](int a) { v1 = 100; return a + v1 + v2; }; //ok

	// mutable ���� : () ������ �Լ��� ���� �Լ��� �ش޶�
	//auto f2 = [v1, v2](int a) mutable { v1 = 100; return a + v1 + v2; };
	

	//cout << sizeof(f2) << endl; // 8byte


	// ���� ĸ��
	auto f2 = [&v1, &v2](int a) { v1 = 100; return a + v1 + v2; };
	
	cout << sizeof(f2) << endl;

	f2(0); //����ǥ���� ���(ȣ��)

	cout << v1 << endl; // 10
		
		
		//------------------------
		/*
	// ������ ĸ���ϸ� ��� ����Ÿ�� �߰��˴ϴ�.
	class ClosureType
	{
		int* v1;
		int* v2;
	public:
		ClosureType(int* a, int* b) : v1(a), v2(b) {}

		inline bool operator()(int a, int b) const
		{
			*v1 = 100; 
			return a + *v1 + *v2;
		}
	};
	auto f2 = ClosureType(v1, v2);

	*/
}








