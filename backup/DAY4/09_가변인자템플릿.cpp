// Step 1. �⺻ ���. - 124 page  

// �������� Ŭ���� ���ø� - 126 p
template<typename ... T> class tuple {};



// �������� �Լ� ���ø�
template<typename ... T> void foo(T ... a) {}


int main()
{
	tuple<> t0;
	tuple<int, double, char> t;

	foo(10, "AA", 4.5);
}

