#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

// value initialization vs default - 209
struct Point
{
	int x, y;

	//Point()   {}
	Point() = default;
};

int main()
{
	Point p1;  // x, y 쓰레기값
	Point p2{};// x, y가 모두 0, 단 사용자가 만든 생성자가 없을때
				// = default로 만든 생성자는 있어도 0 초기화.

	int n1;    // 쓰레기값   default initialization
	int n2{};  // 0으로 초기화  value initialization

	cout << n1 << endl; 
	cout << n2 << endl; // 0
}
