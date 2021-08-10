// 4_TypeDeduction_����

// ��Ģ 1. ��Ÿ�� : ���ڰ� ���� const, volatile, reference�� ��� �����ϰ� T����
//                 lvalue, rvalue ��� ������ �ִ�. ������ ������ �ƴ� ���纻�̴�.!!
template<typename T> void foo(T a) {} 

// ��Ģ 2. ����Ÿ�� ( lvalue reference)
//					 : ���ڰ� ���� const, volatile�� �����ϰ�, reference�� �����ϰ� T����
//                   lvalue�� ������ �ִ�.
template<typename T> void foo(T& a) {}


// ��Ģ 3. forward reference �϶�
//		���ڰ� lvalue �̸� T �� lvalue ������ ����, �׸��� ��Ģ 2����
//            rvalue �̸� T �� ��Ÿ�� ����,        �׸��� ��Ģ 1����
template<typename T> void foo(T&& a) {}


// ���� .. ���ø� ���鶧
template<typename T> void goo(T& a)  {} // ���ڷ� lvalue�� ���
template<typename T> void goo(T&& a) {} // ���ڷ� lvalue, rvalue ��� �����ϰ�..


// decltype(�ɺ�)
// decltype(�ɺ� + ������)



