int main()
{
	int n = 10;
	int* p = &n;
	// 220 page
	// ? ä�켼��...    


	// ��Ģ 1. () �ȿ� �����̸��� �����ڰ� �پ� �ִ� ���..
	//        �ش� ������ ������ ���� ������ Ÿ������ ����.
	decltype(p)  d1; // int* 


	// ��Ģ 2. �����̸� + �����ڸ� �����ϸ�
	// ǥ������ ���ʿ� �ü� ������(lvalue) ���� Ÿ��. �ƴϸ� ��Ÿ��

	decltype(*p) d2; // int& ,,, �ʱⰪ�� �����Ƿ� error


	int x[3] = { 1,2,3 };

	decltype(x[0]) d3;  // int&

	decltype(n + n) d4; // (n+n) = 10 error �̹Ƿ� int 
	
	decltype(++n) d5;   // int& 
	
	decltype(n++) d6;   // int 

	decltype(n = 20) d7; // (n = 20) = 30;  int&

	//int k = 3;
	//int s = ++k * ++k;
}


