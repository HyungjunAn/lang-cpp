// 5_move4_1.cpp
#include <iostream>
#include <string>
using namespace std;

// move ������ �� ������ ���ô�. - 251
// Rule Of 3
//  �����ڰ� �ڿ� �Ҵ��ϸ� 3���� �Լ��� ������ �Ѵ�.
//  �Ҹ���, ���� ������, ���Կ�����

// Rule Of 5  => C++11 ���ʹ� Move ������, Move ���� �߰�

class Test
{
	int* resource;
	string name;
public:
	Test() { resource = new int[100]; }
	~Test() { delete[] resource; }

	// ���� ����
	Test(const Test& t)
	{
		cout << "���� ������" << endl;

		resource = new int[100];
		memcpy(resource, t.resource, sizeof(int)*100);
		name = t.name;
	}

	// ���� ������
	Test& operator=(const Test& t)
	{
		cout << "���� ���� ������" << endl;
		delete[] resource; // �ڽ��� �ڿ��� �����, ��������

		resource = new int[100];
		memcpy(resource, t.resource, sizeof(int) * 100);
		name = t.name;

		return *this;
	}

	Test(Test&& t)
	{
		cout << "Move ������" << endl;

		resource = t.resource;
		t.resource = 0;

		name = move(t.name); // move  �����ڴ� ��� ����� move���̵�
	}

	// ���� ������
	Test& operator=(Test&& t)
	{
		cout << "move ���� ������" << endl;
		delete[] resource; // �ڽ��� �ڿ��� �����, ��������

		resource = t.resource;
		t.resource = 0;
		name = move(t.name); // move  �����ڴ� ��� ����� move���̵�


		return *this;
	}
};

int main()
{
	Test t1;
	Test t2 = t1;
	t2 = t1;
}

