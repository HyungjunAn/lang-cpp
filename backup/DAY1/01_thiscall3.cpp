#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

// vc�� ������ ����..
// ��Ƽ ������ ������ ��ü�������� ����.

/*
DWORD __stdcall threadProc(void* p)
{
	return 0;
}

int main()
{
	CreateThread(0, 0, threadProc, "A", 0, 0);
}
*/

//-------------------------------------------
// ���̺귯�� ���� Ŭ����
class Thread
{
public:
	void run() { CreateThread(0, 0, threadProc, this, 0, 0); }

	// �ٽ� 1. �Ʒ� �Լ��� static ��� �Լ��� �Ǿ�� �ϴ� ����.!
	// �ٽ� 2. this�� ���ڷ� �����ϴ� ��� 
	//		�ȵ���̵� �����ӿ�ũ �� Thread Ŭ������ �� ��� ���

	static DWORD __stdcall threadProc(void* p)
	{
		Thread* self = static_cast<Thread*>(p);
		
		self->Main(); // �ᱹ Main(self)  ok

		//Main(); // this->Main()
		        // ��, Main(this) �� �Ǿ�� �մϴ�.

		return 0;
	}

	virtual void Main() = 0; // Main(Thread* this)
};


// ���̺귯�� ����� Ŭ����
class MyThread : public Thread
{
public:
	virtual void Main() { cout << "MyThread Main" << endl; }
};

int main()
{
	MyThread t;
	t.run();  // �̼��� �����尡 �����Ǿ
				// Main() �� ����ǵ��� ������ �մϴ�.

	_getch();
}
