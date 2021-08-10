int main()
{
	int n = 10;
	int* p = &n;
	// 220 page
	// ? 채우세요...    


	// 규칙 1. () 안에 변수이름에 연산자가 붙어 있는 경우..
	//        해당 변수의 선언을 보고 동일한 타입으로 결정.
	decltype(p)  d1; // int* 


	// 규칙 2. 변수이름 + 연산자를 포함하면
	// 표현식이 왼쪽에 올수 있으면(lvalue) 참조 타입. 아니면 값타입

	decltype(*p) d2; // int& ,,, 초기값이 없으므로 error


	int x[3] = { 1,2,3 };

	decltype(x[0]) d3;  // int&

	decltype(n + n) d4; // (n+n) = 10 error 이므로 int 
	
	decltype(++n) d5;   // int& 
	
	decltype(n++) d6;   // int 

	decltype(n = 20) d7; // (n = 20) = 30;  int&

	//int k = 3;
	//int s = ++k * ++k;
}


