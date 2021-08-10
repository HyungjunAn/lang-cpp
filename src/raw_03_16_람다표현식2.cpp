// 285 page 아래 부분 ~ 286
       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

// 핵심 1. 인라인 치환은 컴파일 시간에 이루어 진다. 285 아래 부분
// 2. 인라인 함수라도 함수 포인터에 담아서 호출하면 치환될수 없다.
int main()
{
	int n1 = Add1(1, 2); // 호출 
	int n2 = Add2(1, 2); // 치환..

	int(*f)(int, int);

	f = &Add2;

	int a;
	cin >> a;
	if (a == 0) f = &Add1;

	int n3 = f(1, 2); // 호출 ? 치환
}






