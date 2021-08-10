#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;


class Point
{
public:
	Point(int a, int b)          { cout << "int, int" << endl; }
	Point(initializer_list<int>) { cout << "initializer_list" << endl; }
};
int main()
{
	// 아래 코드가 각각 어떤 생성자를 호출할지 생각해보세요 - 212

	Point p1(1, 1);     // 1. 없으면 error
	Point p9({ 1,2,3 });// 2. 없으면 error

	
	Point p2{ 1, 1 }; // 핵심. 2번 사용. 없으면 1번 사용


	Point p3 = (1, 2); // error
	Point p4 = { 1, 1 }; // 복사 초기화. 2번, 없으면 1번
	
	Point p5(1, 1, 1); // error
	Point p6{ 1,1,1 }; // ok... 2번
	
	Point p7 = { 1,1,1 }; // ok  2


	vector<int> v1(1, 2); // 1개를 2로 초기화
	vector<int> v2{1 ,2}; // 2개를 1,2로 초기화

	vector<int> v3{ 1,2,3,4,5,6,7 };// ok

	// explicit vector(int size) 생성자
	vector<int> v5(10); // ok
	vector<int> v6 = 10; // error

	//vector(initializer_list<int>) 생성자
	vector<int> v7{ 10 }; // ok
	vector<int> v8 = { 10 }; // ok
}