// 207 아래 부분
class Vector
{
public:
	// explicit : 직접초기화로만 객체를 생성할수 있다.
	//            복사 초기화는 사용할수 없다.
	//            
	explicit Vector(int sz) {}
};
void foo(Vector v) // Vector v = 10   error
{
}
int main()
{
	Vector v1(10); // 또는 v1{10}   : direct 초기화
	Vector v2 = 10;// 또는 v2 = {10}: copy 초기화   error

	foo(10);

	//
	string s1("AA");  // ok
	string s2 = "AA"; // ok

	vector<int> v1(10); //ok
	vector<int> v2 = 10; // error. vector의 생성자는 explicit 

	//v2 = 10; // v2.operator=()
}