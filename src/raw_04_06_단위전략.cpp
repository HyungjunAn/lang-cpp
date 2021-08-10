// 단위 전략 - 322 page
// 단위 전략(policy base design) : 템플릿인자로 정책을 담은
//		클래스를 전달해서 사용하는것
//		성능저하없이 정책 교체가 가능
//      STL의 핵심 설계 원리

// "Modern C++ Design" 책 참고 - "안드레이 알렉산드레스큐"

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
// 동기화 정책을 담은 정책 클래스
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

List<int, NoLock> s1; // 전역변수, 멀티스레드에 안전하지 않습니다.


int main()
{
	s1.push_front(10);
}