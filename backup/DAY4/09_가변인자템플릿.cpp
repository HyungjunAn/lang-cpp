// Step 1. 기본 모양. - 124 page  

// 가변인자 클래스 템플릿 - 126 p
template<typename ... T> class tuple {};



// 가변인자 함수 템플릿
template<typename ... T> void foo(T ... a) {}


int main()
{
	tuple<> t0;
	tuple<int, double, char> t;

	foo(10, "AA", 4.5);
}

