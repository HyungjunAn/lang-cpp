int main()
{
	int x[3] = { 1,2,3 }; //  int[3]


	auto a1 = x;  // a1 타입은 ?  => int*
				  // 1. int a1[3] = x; 로 결정하면 컴파일 에러
				  // 2. int* a1 = x;로 결정하면 컴파일 ok

	auto& a2 = x; // int(&a2)[3] = x;   배열을 가리키는 참조
	//		a2는 배열을 가리키는 참조
}