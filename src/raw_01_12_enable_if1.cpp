template<bool b, typename T = void>
struct enable_if
{
	typedef T type;
};

template<typename T>
struct enable_if<false, T>
{
};

int main()
{
	enable_if<true, int>::type n1;  
	enable_if<true, double>::type n2;
	enable_if<true>::type n3;  
	
	enable_if<false, int>::type n4;
}




