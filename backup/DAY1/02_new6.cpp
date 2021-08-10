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

	// ���� Ű���1. ���ο� ���� �Ҵ�.
	//Object* buf2 = new Object[4];
	
	Object* buf2 = static_cast<Object*>(
				operator new(sizeof(Object)*4));

	// ���� ���� ����.
	for (int i = 0; i < 2; i++)
	{
		//buf2[i] = buf[1];
		new(&buf2[i]) Object(buf[i]); // ���� ��ü�� �����ؼ� ����
	}

	// ���� �߰��� ��ü�� ����Ʈ ������
	for (int i = 2; i < 4; i++)
	{
		new(&buf2[i]) Object; //
	}

	delete[] buf1; // ���� ���� ����
	buf1 = buf2;

	// ����Ŀ�... buf1�� �Ҹ��� ȣ����, operator delete() 

}