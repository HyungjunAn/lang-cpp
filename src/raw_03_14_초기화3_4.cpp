// 207 �Ʒ� �κ�
class Vector
{
public:
	// explicit : �����ʱ�ȭ�θ� ��ü�� �����Ҽ� �ִ�.
	//            ���� �ʱ�ȭ�� ����Ҽ� ����.
	//            
	explicit Vector(int sz) {}
};
void foo(Vector v) // Vector v = 10   error
{
}
int main()
{
	Vector v1(10); // �Ǵ� v1{10}   : direct �ʱ�ȭ
	Vector v2 = 10;// �Ǵ� v2 = {10}: copy �ʱ�ȭ   error

	foo(10);

	//
	string s1("AA");  // ok
	string s2 = "AA"; // ok

	vector<int> v1(10); //ok
	vector<int> v2 = 10; // error. vector�� �����ڴ� explicit 

	//v2 = 10; // v2.operator=()
}