#include <iostream>
#include <vector>
using namespace std;
/*
int main()
{
	vector<int> v(10, 0); // 10개를 0으로 초기화
	v.resize(7);

	cout << v.size() << endl;    // 7
	cout << v.capacity() << endl;// 10

	v.push_back(0);  // 한개 추가.

	cout << v.size() << endl; // 8
	cout << v.capacity() << endl;// 10

	v.shrink_to_fit();

	cout << v.size() << endl; // 8
	cout << v.capacity() << endl;// 8


	v.push_back(0);  // 한개 추가.

	cout << v.size() << endl; // 9
	cout << v.capacity() << endl;// 컴파일러마다 다름.
					//1.5배 또는 2배정도

}
*/
// 31 page
class DBConnect
{
public:
	DBConnect()  { cout << "DB접속" << endl; }
	~DBConnect() { cout << "DB닫기" << endl; }
};
int main()
{
	vector<DBConnect> v(10);
	cout << "-----" << endl;

	v.resize(7); // 이순간의 구현원리를 생각해 보세요
				// 줄어든 3개의 객체를 위한 메모리는 계속 있습니다.
				// 하지만 소멸자는 명시적으로 호출해서 DB을 닫아야 합니다.
	
	cout << "-----" << endl;

	v.resize(8);  // placement new 사용...

	cout << "-----" << endl;
}


