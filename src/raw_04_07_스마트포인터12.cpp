#include <memory>
using namespace std;

// C++ 표준 스마트 포인터
// shared_ptr, weak_ptr, unique_ptr

int main()
{
	shared_ptr<int> sp1(new int);
	shared_ptr<int> sp2 = sp1; //ok.  참조계수 2

	unique_ptr<int> up1(new int);
	//unique_ptr<int> up2 = up1; //error. 복사 금지.




	unique_ptr<int> up3 = move(up1); // ok.

	//----------------
	// 다음중 에러를 고르세요
	shared_ptr<int> sp = up1;		// 1. error
	shared_ptr<int> sp = move(up1); // 2. ok
	unique_ptr<int> up = sp1;       // 3. error
	unique_ptr<int> up = move(sp1); // 4. error
}


unique_ptr<int> alloc_resource(int sz)
{
	// 메모리를 할당해서 스마트 포인터로 반환하려고 합니다
	// shared_ptr을 반환 할까요 ?
	// unique_ptr을 반환 할까요 ?
}

unique_ptr<int> up = alloc_resource(100);
shared_ptr<int> sp = alloc_resource(100);





