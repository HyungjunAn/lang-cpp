// 279p  2번 
// 1. 일반 함수는 자신만의 타입이 없다
//    signature가 동일한 함수는 같은 타입이다.

// 2. 함수객체는 자신만의 타입이 있다
//    signature가 동일해도 모두 다른 타입이다.

struct Less    
{ 
	inline bool operator()(int a, int b) 
	{
		return a < b; 
	}
};
struct Greater { inline bool operator()(int a, int b) { return a > b; }};

//-------------------------------------------------------


// 정책 교체가 가능하고 정책 함수의 인라인 치환이 지원되는 알고리즘
// 템플릿 + 함수 객체로 만드는 기술
template<typename T> void Sort(int* x, int sz, T cmp )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
			if (cmp(x[i], x[j]))  
				swap(x[i], x[j]);
		}
	}
}


int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
	Less f1;
	f1(1, 2);
	Sort(x, 10, f1); // ok.. f1의 () 연산자 함수는 인라인 치환됨.

	Greater f2;
	f2(1, 2);

	Sort(x, 10, f2);
}

