#include <iostream>
using namespace std;
#include <memory>

// ������ ���� - 330
void foo(int* p) { free(p); }

int main()
{
	shared_ptr<int> p1(new int);

	shared_ptr<int> p2(static_cast<int*>(malloc(100)), foo );
				// p2�ı��� delete �������� fooȣ���� �޶�

	shared_ptr<int> p3(static_cast<int*>(malloc(100)), 
							[](int* p) { free(p); });

	shared_ptr<int> p4(static_cast<int*>(malloc(100)), free);


	shared_ptr<int> p5(new int[10], [](int* p) { delete[] p; });

	// c++17 ��������
	shared_ptr<int[]> p6(new int[10]);

	cout << "----" << endl;
}





