// 323.  allocator����
/*
template<typename T, typename Alloc = allocator<T> > class vector
{
	T* buff;
	int size;
	Alloc ax; // �޸� �Ҵ��
public:
	void resize(int newsize)
	{
		if (newsize > size)
		{
			// �޸� ���Ҵ��� �ʿ� �մϴ�. ��� �ұ�� ?
			// new, malloc, linux system call, windows api,
			// pooling ��..
			buff = ax.allocate(newsize);

			// �޸� �����Ϸ���
			ax.deallocate(buff);
		}
	}
};

*/
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	//vector<

	allocator<int> ax; // C++ ǥ�� �޸� �Ҵ��

	int* p = ax.allocate(10); // operator new(sizeof(int)*10);

	for ( int i = 0 ; i< 10; i++)
		ax.construct(&p[i]);   // ������ ȣ��

	for (int i = 0; i < 10; i++)
		ax.destroy(&p[i]);   // �Ҹ��� ȣ��
	
	ax.deallocate(p, 10); // operator delete(p)

	// ����� ���� allocator�� �������
	// �ݵ�� ���Ѿ� �ϴ� ��Ģ�� �ִ�.
	// ���� �������� "��åŬ����"�� �� ���Ѿ� �ϴ� ��Ģ�� �ִ�.
	// cppreferece.com ���� allocator ã�� ������.

	vector<int, MyAlloc<int> > v;
	v.resize(10);
}
