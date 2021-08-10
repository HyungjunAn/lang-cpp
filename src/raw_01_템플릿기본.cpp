// 템플릿기본.cpp  소스 추가하세요

// C언어의 단점 : 동일한 이름의 함수를 2개 만들수 없다.
// C++ : 동일한 이름의 함수 사용가능 - 함수 오버로딩.
/*
int square(int n)
{
	return  n * n;
}
double square(double n)
{
	return  n * n;
}
*/

/*
// 유사한 코드가 반복되면 코드를 자동생성되게 하자.
#define MAKE_SQUARE(T) T square(T a) { return a* a;}

MAKE_SQUARE(int);
MAKE_SQUARE(double);
*/

// 전처리기가 아닌 컴파일러에게 코드 생성을 요청한다.

template<typename T> // template parameter
T square(T a)        // call parameter
{
	return a* a;
}

int main()
{
	printf("%p", &square); // error
	printf("%p", &square<int> ); // ok


	// 함수 템플릿을 사용하는 정확한 방법.
	square<int>(3);
	square<double>(3.4);

	// template 파라미터는 생략가능. 생략시 call paramter를 가지고
	// 타입 결정
	square(3);

	int n = 3;
	square(++n);
	square(3.4);
}