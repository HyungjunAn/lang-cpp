#include <memory>
using namespace std;

// C++ ǥ�� ����Ʈ ������
// shared_ptr, weak_ptr, unique_ptr

int main()
{
	shared_ptr<int> sp1(new int);
	shared_ptr<int> sp2 = sp1; //ok.  ������� 2

	unique_ptr<int> up1(new int);
	//unique_ptr<int> up2 = up1; //error. ���� ����.




	unique_ptr<int> up3 = move(up1); // ok.

	//----------------
	// ������ ������ ������
	shared_ptr<int> sp = up1;		// 1. error
	shared_ptr<int> sp = move(up1); // 2. ok
	unique_ptr<int> up = sp1;       // 3. error
	unique_ptr<int> up = move(sp1); // 4. error
}


unique_ptr<int> alloc_resource(int sz)
{
	// �޸𸮸� �Ҵ��ؼ� ����Ʈ �����ͷ� ��ȯ�Ϸ��� �մϴ�
	// shared_ptr�� ��ȯ �ұ�� ?
	// unique_ptr�� ��ȯ �ұ�� ?
}

unique_ptr<int> up = alloc_resource(100);
shared_ptr<int> sp = alloc_resource(100);





