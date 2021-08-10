#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

// vc만 가능한 예제..
// 멀티 스레드 개념을 객체지향으로 설계.

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
// 라이브러리 내부 클래스
class Thread
{
public:
	void run() { CreateThread(0, 0, threadProc, this, 0, 0); }

	// 핵심 1. 아래 함수가 static 멤버 함수가 되어야 하는 이유.!
	// 핵심 2. this를 인자로 전달하는 기술 
	//		안드로이드 프레임워크 의 Thread 클래스가 이 기술 사용

	static DWORD __stdcall threadProc(void* p)
	{
		Thread* self = static_cast<Thread*>(p);
		
		self->Main(); // 결국 Main(self)  ok

		//Main(); // this->Main()
		        // 즉, Main(this) 가 되어야 합니다.

		return 0;
	}

	virtual void Main() = 0; // Main(Thread* this)
};


// 라이브러리 사용자 클래스
class MyThread : public Thread
{
public:
	virtual void Main() { cout << "MyThread Main" << endl; }
};

int main()
{
	MyThread t;
	t.run();  // 이순간 스레드가 생성되어서
				// Main() 이 실행되도록 만들어야 합니다.

	_getch();
}
