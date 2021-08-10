#include "cppmaster.h"
#include <iostream>
using namespace std;

struct Object
{
	int* resource;

	Object()  {	resource = new int[100];}
	~Object() { delete[] resource; }

	Object(const Object& o)
	{
		// deep copy
		resource = new int[100];
		memcpy(resource, o.resource, sizeof(int) * 100);
	}
};

int main()
{
	Object* buf1 = new Object[2];

	// 버퍼 키우기1. 새로운 버퍼 할당.
	//Object* buf2 = new Object[4];
	
	Object* buf2 = static_cast<Object*>(
				operator new(sizeof(Object)*4));

	// 기존 버퍼 복사.
	for (int i = 0; i < 2; i++)
	{
		//buf2[i] = buf[1];
		new(&buf2[i]) Object(buf[i]); // 기존 객체를 복사해서 생성
	}

	// 새로 추가된 객체는 디폴트 생성자
	for (int i = 2; i < 4; i++)
	{
		new(&buf2[i]) Object; //
	}

	delete[] buf1; // 기존 버퍼 제거
	buf1 = buf2;

	// 사용후에... buf1는 소멸자 호출후, operator delete() 

}