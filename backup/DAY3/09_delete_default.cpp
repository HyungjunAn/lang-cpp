// 186 page
int add(int a, int b)
{
	return a + b;
}

//double add(double a, double b);  // 핵심.. 선언만 한다. 구현이 없다
							// 의도 : 사용시 링크에러를 나오게 
							//      하겠다는 것.

double add(double a, double b) = delete; // C++11 함수 삭제 문법
								// 사용시 컴파일 시간에 에러
int main()
{
	add(1, 2);

	add(3.4, 2.3);
}