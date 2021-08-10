#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) { cout << "Point()" << endl; }
	~Point()                         { cout << "~Point()" << endl; }
};
int main()
{
	//Point p(1, 2); // 이름 있는 객체.. 블럭({})의 끝에서 파괴 된다.
	
	//Point(1, 2); // 이름 없는 객체, 임시객체(temporary object)
				  // 수명 : 자신을 생성한 문장의 끝(;)

	Point(1, 2), cout << "X" << endl;

	cout << "---------" << endl;
}






