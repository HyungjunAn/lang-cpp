// ���� ���� - 322 page
// ���� ����(policy base design) : ���ø����ڷ� ��å�� ����
//		Ŭ������ �����ؼ� ����ϴ°�
//		�������Ͼ��� ��å ��ü�� ����
//      STL�� �ٽ� ���� ����

// "Modern C++ Design" å ���� - "�ȵ巹�� �˷���巹��ť"

template<typename T, typename ThreadModel> class List
{
	ThreadModel tm;
public:
	void push_front(const T& a)
	{
		tm.lock();
		// .....
		tm.unlock();
	}
};
// ����ȭ ��å�� ���� ��å Ŭ����
struct NoLock
{
	inline void lock() {}
	inline void unlock() {}
};
struct PosixMutexLock
{
	inline void lock()   {} // mutex.lock()
	inline void unlock() {} // mutex.unlock()
};

List<int, NoLock> s1; // ��������, ��Ƽ�����忡 �������� �ʽ��ϴ�.


int main()
{
	s1.push_front(10);
}